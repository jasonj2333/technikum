#include <iostream>

using namespace std;

string cezar(string tekst, int klucz) {
    string szyfrogram = "";
    for (char litera : tekst) {
        if (litera >= 97 && litera <= 122) {
            szyfrogram += (litera - 97 + klucz + 26) % 26 + 97;
        }
        else {
            szyfrogram += litera;
        }
    }
    return szyfrogram;
}

int main()
{
    string tekstJawny = "informatyka jest fajna";
    int klucz = 13;
    string szyfrogram = cezar(tekstJawny, klucz);
    cout << "Szyfrogram: " << szyfrogram << endl;
    cout << "Tekst odszyfrowany: " << cezar(szyfrogram, 26 - klucz) << endl;

}
