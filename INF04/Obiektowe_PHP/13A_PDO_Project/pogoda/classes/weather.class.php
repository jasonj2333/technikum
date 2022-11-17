<?php

class Weather extends Dbh {
    public function createTables()
    {
         $stmt = $this->connect();
         $commands = ['CREATE TABLE IF NOT EXISTS days (
                        id INTEGER PRIMARY KEY AUTOINCREMENT,
                        measurementDate TEXT NOT NULL,
                        temperatureMorning REAL,
                        temperatureEvening REAL,
                        weatherId INTEGER NOT NULL,
                        comments TEXT,
                        FOREIGN KEY (weatherId)
                        REFERENCES weatherTypes(types_id) ON UPDATE CASCADE ON DELETE CASCADE
          )',
            'CREATE TABLE IF NOT EXISTS weatherTypes (
                    types_id INTEGER PRIMARY KEY AUTOINCREMENT,
                    types_desc  VARCHAR (255) NOT NULL,
                    types_icon  VARCHAR (255) )'];
            // execute the sql commands to create new tables
            foreach ($commands as $command) {
                $stmt->exec($command);
            }
         
    }

    public function createFakeData()
    {
     $stmt = $this->connect();
          $commands = ["INSERT INTO days (measurementDate,temperatureMorning, temperatureEvening,weatherId,comments) VALUES ('2022-11-10',11.0,15.0,1,NULL),
          ('2022-11-11',5.0,7.0,2,NULL),
          ('2022-11-12',5.0,9.0,4,NULL),
          ('2022-11-12',2.0,5.0,4,NULL),
          ('2022-11-13',1.0,9.0,4,NULL),
          ('2022-11-14',4.0,5.0,3,NULL),
          ('2022-11-15',-1.0,2.0,4,NULL),
          ('2022-11-16',-2.0,1.0,2,NULL),
          ('2022-11-17',-5.0,-2.0,4,'Zima');",
          "INSERT INTO weatherTypes (types_desc,types_icon) VALUES
          ('słonecznie','sun.png'),
          ('lekkie zachmurzenie','little_clouds.png'),
          ('pochmurno','cloudy.png'),
          ('deszczowo','rainy.png'),
          ('śnieg','snow.png');"];
        // execute the sql commands to create new tables
        foreach ($commands as $command) {
            $stmt->exec($command);
        }
         
    }

    public function getLastWeek()
    {
         $sql = "SELECT * FROM days INNER JOIN weatherTypes on weatherId = types_id ORDER BY id DESC LIMIT 7";
         $stmt = $this->connect();
         $result = $stmt->query($sql);
         return $result->fetchAll();    
    }

    public function getWeatherTypes()
    {
         $sql = "SELECT * FROM weatherTypes";
         $stmt = $this->connect();
         $result = $stmt->query($sql);
         return $result->fetchAll();    
    }

    public function addWeather($measurementDate, $temperatureMorning,$temperatureEvening, $weatherId, $comments)
    {
         $sql = "INSERT INTO days(measurementDate, temperatureMorning, temperatureEvening, weatherId, comments) VALUES (?, ?, ?, ?, ?)";
         $stmt = $this->connect()->prepare($sql);
         $stmt->execute([$measurementDate, $temperatureMorning, $temperatureEvening, $weatherId, $comments]);
         
    }
}