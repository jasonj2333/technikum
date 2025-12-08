#include <iostream>

using namespace std;

//Zamień  na klasę dziedziczącą po exception i obsluz blad nadpisując 
//metodę what()
//struct ErrorMsg
//{
//    int code;
//    string msg;
//};

class ErrorMsg : public exception
{
public:    
    const char* what() const noexcept {
        return "Wlacz drukarke!";
    }
};

class Printer {
    bool power;
    int buffer_size;
    string name;
    int paper;
public:
    Printer(string name, int paper, bool power = true, int bs = 150) : name{ name }, paper{ paper }, power{ power }, buffer_size{ bs } {};
    void Print(string txtDoc) {
        int requiredPaper = txtDoc.length() / 10;
        //if (!power) throw ErrorMsg() = {101, "Wlacz drukarke do pradu!"};
        if (!power) throw ErrorMsg();
        if (txtDoc.length() > buffer_size) throw 207;
        if (requiredPaper > paper) throw "Brak papieru";

        cout << "Drukuje..." << txtDoc << endl;
        paper -= requiredPaper;
    }
};

int main()
{
    Printer myPrinter("HP LaserJet 123", 20, false);

    try {
        myPrinter.Print("Litwo Ojczyzno moja! Ty jestes jak zdrowie.");
        //myPrinter.Print("Litwo Ojczyzno moja! Ty jestes jak zdrowie.");
        myPrinter.Print("Litwo Ojczyzno moja! Ty jestes jak zdrowie. Litwo Ojczyzno moja! Ty jestes jak zdrowie. Litwo Ojczyzno moja! Ty jestes jak zdrowie. Litwo Ojczyzno moja! Ty jestes jak zdrowie.");
    }
    catch (ErrorMsg &e) {
        cout << e.what() << endl;

    }
    catch (const char *e) {
        cout << "Blad : " << e << endl;
    }
    catch (int e) {
        cout << "Blad: " << e << endl;
    }
    catch (...) {
        cout << "Cos poszlo nie tak" << endl;
    }
}

