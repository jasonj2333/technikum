#include <iostream>
//Dołączenie do programu zasobów biblioteki (pliku nagłówkowego) o nazwie cstring
#include <cstring>
//UWAGA
//Dołączenie cstring jest konieczne ze względu na korzystanie w programie z funkcji strcpy()
//zdefiniowanej w tej bibliotece. Zamiast cstring można dołączyć równoważny zbiór nagłówkowy string.h

using namespace std;

int main()
{
    //Deklaracja i inicjalizacja C-napisu jezyk1
    char jezyk1[15] = "C++"; //inicjalizacja kopiująca
    //UWAGA:
    //C-napis jezyk1 można też zainicjalizować na innej sposoby:
    //char jezyk1[15]("C++"); //inicjalizacja bezpośrednia
    //char jezyk1[15] = {"C++"}; //inicjalizacja jednolita kopiująca
    //char jezyk1[15] {"C++"}; //inicjalizacja jednolita bezpośrednia
    cout << jezyk1 << endl;

    //Skopiowanie literału łańcuchowego "Java" do zmiennej jezyk1
    strcpy_s(jezyk1, "Java");
    //jezyk1 = "Java"; - błąd!
    //strcpy -  ostrzeżenie, że niebezpieczna
    cout << jezyk1 << endl;

    //Deklaracja i inicjalizacja c-napisu jezyk2
    char jezyk2[] = "C#";
    //UWAGA:
    //Rozmiar tablicy ustalony na podstawie rozmiaru wartości początkowej
    cout << jezyk2 << endl;
    //Skopiowanie napisu "Java" do zmiennej jezyk2
    //strcpy_s(jezyk2, "Java"); - błąd
    //cout << jezyk2 << endl;

}


