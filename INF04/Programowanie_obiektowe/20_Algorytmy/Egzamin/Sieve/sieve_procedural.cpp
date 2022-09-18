//algorytm.edu.pl
#include<iostream>
using namespace std;

void sito(bool *tab, unsigned int n)
{
	for (int i=2; i*i<=n; i++) //przeszukujemy kolejnych kandydatów na pierwsze
    {							//wystarczy sprawdzić do pierwiastka z n
    							// i<=sqrt(n) - podnosząc do kwadratu mamy
    							// i*i <= n
        if(!tab[i])				//jesli liczba jest pierwsza(ma wartosc 0)
		for (int j = i*i ; j<=n; j+=i) //to wykreslamy jej wielokrotnosci
            tab[j] = 1;			//ustawiając wartosć na 1
    }
}

int main()
{
	int n;
	bool *tab;
	
	cout<<"Podaj zakres górny przedziału: ";
	cin>>n;
	
	tab = new bool [n+1];
	
	for(int i=2; i<=n; i++) //zerowanie tablicy
		tab[i] = 0;
	
	sito(tab, n); //przesianie liczb
	
	cout<<"Kolejne liczby pierwsze z przedziału [2.."<<n<<"]: ";
	
	for(int i=2;i<=n;i++)
		if(!tab[i])
			cout<<i<<" ";
	
	delete []tab;

    return 0;
}