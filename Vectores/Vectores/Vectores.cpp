#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numero[5]; //Array o vector de 5 numeros
	int suma; //Un entero que guarda la suma
	int suma = 0;
	numero[0] = 200;
	numero[1] = 150;
	numero[2] = 100;
	numero[3] = -50;
	numero[4] = 300;
	for (int i = 0; i <= 5; i++)
	{
		cout << "Dame un numero: ";
		cin >> numero[i];
		suma = suma + numero[i];
	}
	cout << "La suma es: " << suma;
	return 0;
}
