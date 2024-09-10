#include <iostream>
#include <vector>
using namespace std;

class Instrument {
public:
    virtual void play() = 0;
};

class Guitar : public Instrument {
    int numberOfStrings;
public:
    void play() {
        cout << "Guitar play ..." << endl;
    }
};

class Flute : public Instrument {
    string type;
public:
    void play() {
        cout << "Flute play ..." << endl;
    }
};

class Trombone : public Instrument {
    string type;
public:
    void play() {
        cout << "Trombone play ..." << endl;
    }
};

class Orchestra : public Instrument {
    string name;
    vector<Instrument*> instruments;
public:
    Orchestra(string name) : name(name) {};
    ~Orchestra(){
        for (int i = 0; i < instruments.size(); ++i) {
            delete instruments[i]; // Calls ~object (which deallocates tmp[i]->foo) 
                        // and deallocates *tmp[i]
        }
        instruments.clear();
    }
    void addInstrument(Instrument* instrument) {
        instruments.push_back(instrument);
    }
    void play() {
        cout << "Orchestra: " << name << endl;
        for (Instrument* instrument : instruments)
        {
            instrument->play();
        }
    }
};

int main()
{

    Instrument* guitar = new Guitar;
    Instrument* flute = new Flute;
    Instrument* trombone = new Trombone;

    Orchestra orchestra("Sinfonia Varsovia");
    orchestra.addInstrument(guitar);
    orchestra.addInstrument(flute);
    orchestra.addInstrument(trombone);

    orchestra.play();

}
