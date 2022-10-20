#include <iostream>

using namespace std;

class Instrument {
public:
    virtual void play() {
        cout << "Instrument play ..." << endl;
    }
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

int main()
{
    Instrument instrument;
    instrument.play();

    Instrument* guitar = new Guitar;
    guitar->play();

    Instrument* flute = new Flute;
    flute->play();

    Instrument* trombone = new Trombone;
    trombone->play();

    cout << "---------------" << endl;
    //w pętli
    Instrument* orchestra[] = { guitar, flute, trombone };

    for (Instrument* instrument : orchestra)
    {
        instrument->play();
    }


    for (int i = 0; i < sizeof(orchestra) / sizeof(guitar); i++)
    {
        delete orchestra[i];//delete the A object allocations.
    }

}


