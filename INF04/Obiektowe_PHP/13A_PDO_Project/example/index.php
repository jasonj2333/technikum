<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>SQLite Example</title>
    <style>
        table{
            border-collapse: collapse;
        }
        th, td{
            border: 1px solid black;
            padding: 5px;
        }
    </style>
</head>
<body>
    <?php
        $pdo = new PDO('sqlite:chinook.db');

        $statement = $pdo->query("SELECT * FROM employees");

        $rows = $statement->fetchAll(PDO::FETCH_ASSOC);
    ?>
    <table>
        <tr>
            <th>FirstName</th>
            <th>LastName</th>
            <th>Title</th>
            <th>Country</th>
            <th>City</th>
            <th>Phone</th>
            <th>Email</th>
        </tr>
        <?php foreach($rows as $row) : ?>
        <tr>
            <td><?php echo $row['FirstName'] ?></td>
            <td><?php echo $row['LastName'] ?></td>
            <td><?php echo $row['Title'] ?></td>
            <td><?php echo $row['Country'] ?></td>
            <td><?php echo $row['City'] ?></td>
            <td><?php echo $row['Phone'] ?></td>
            <td><?php echo $row['Email'] ?></td>

        </tr>
        <?php $pdo=null; ?>
        <?php endforeach; ?>
    </table>
</body>
</html>