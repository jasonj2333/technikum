#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//Deklaracja C-napisu
	char napis[] = "Visual Studio Community";

	cout << napis[0] << endl;

	//Wyświetlenie całego napisu
	for (int i = 0; i <= strlen(napis); i++)
	{
		cout << napis[i];
	}
	cout << endl;
}


