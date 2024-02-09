#include <iostream>

using namespace std;

class Instrument {
public:
    virtual void play() = 0;
};

class Guitar : public Instrument{
public:
    void play() {
        cout << "Guitar play ..." << endl;
    }
};

class Flute : public Instrument {
public:
    void play1() {
        cout << "Flute play ..." << endl;
    }
};

class Trombone : public Instrument {
public:
    void play() {
        cout << "Trombone play ..." << endl;
    }
};


int main()
{
   
    Instrument* guitar = new Guitar;
    Instrument* flute = new Flute;
    Instrument* trombone = new Trombone;

    Instrument* orchestra[] = { guitar, flute, trombone };

    for (Instrument* instrument : orchestra)
    {
        instrument->play();
    }

}
