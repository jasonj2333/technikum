#include <iostream>
using namespace std;

const int w = 3; //wiersze
const int k = 2; //kolumny

int tablica[w][k];

int main()
{
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++) {
			tablica[i][j] = i + j;
		}
	}

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++) {
			cout << "Element[" << i << "][" << j << "] = " << tablica[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	int tablica2[w][k] = { {1,2},{5,9},{3,11} }; //od C++11

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++) {
			cout << "Element[" << i << "][" << j << "] = " << tablica2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	int tablica3[w][k]{1,2,3,4,5,6}; //od C++11

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++) {
			cout << "Element[" << i << "][" << j << "] = " << tablica3[i][j] << " ";
		}
		cout << endl;
	}
}

