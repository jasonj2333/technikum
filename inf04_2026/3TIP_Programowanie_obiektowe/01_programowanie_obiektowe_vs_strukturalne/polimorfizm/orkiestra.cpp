#include <iostream>
#include <vector>
using namespace std;

class Instrument {
public:
	virtual void play() = 0; // pure virtual function
};

class Guitar : public Instrument {
public:
	void play() override {
		std::cout << "Playing the guitar" << std::endl;
	}
};

class Flute : public Instrument {
public:
	void play() override {
		std::cout << "Playing the flute" << std::endl;
	}
};

class Trombone : public Instrument {
public:
	void play() override {
		std::cout << "Playing the trombone" << std::endl;
	}
};

class Orchestra : public Instrument {
	string name;
	vector<Instrument*> instruments;
public:
	void setName(string name) {
		this->name = name;
	}
	void addInstrument(Instrument* instrument) {
		instruments.push_back(instrument);
	}
	void play() override {
		cout << "Playing the orchestra: " << name << endl;
		for (Instrument* instrument : instruments) {
			instrument->play();
		}
	}
};

int main()
{
	Instrument* guitar = new Guitar();
	Instrument*	flute = new Flute();
	Instrument*	trombone = new Trombone();

	Orchestra* orchestra = new Orchestra();
	orchestra->setName("My Orchestra");
	orchestra->addInstrument(guitar);
	orchestra->addInstrument(flute);
	orchestra->addInstrument(trombone);
	
	orchestra->play();

	delete orchestra;
}


