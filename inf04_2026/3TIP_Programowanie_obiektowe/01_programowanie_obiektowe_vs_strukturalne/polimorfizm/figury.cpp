#include <iostream>
#include <vector>
using namespace std;

class Figura {
protected:
	vector<int> boki;
public:
	Figura(vector<int> boki) : boki(boki) {}
	virtual double pole() = 0; //Metoda czysto wirtualna
	virtual double obwod();
};

class Prostakat : public Figura {
public:
	Prostakat(int a, int b) : Figura({ a, b, a, b }) {}
	double pole() override;
};

class Kwadrat : public Prostakat {
public:
	Kwadrat(int a) : Prostakat(a, a) {}
};

class Kolo : public Figura {
public:
	Kolo(int r) : Figura({ r }) {}
	double pole() override;
	double obwod() override;
};

int main()
{
	Figura* figury[3];

	//Figura f1 = Figura({ 3, 4, 3, 4 }); //Nie można tworzyc obiektu klasy abstrakcyjnej

	Prostakat prostokat(3, 4);
	figury[0] = &prostokat;

	Kwadrat kwadrat(5);
	figury[1] = &kwadrat;

	figury[2] = new Kolo(3);

	for (Figura *f : figury)
	{
		cout << f->obwod() << endl;
		cout << f->pole() << endl;
	}

	delete figury[2];
}

double Figura::obwod() {
	double sum = 0;
	for (int bok : boki) {
		sum += bok;
	}
	return sum;
}


double Prostakat::pole() {
	return boki[0] * boki[1];
}

double Kolo::pole() {
	return 3.141592 * boki[0] * boki[0];
}

double Kolo::obwod() {
	return 2 * 3.141592 * boki[0];
}
