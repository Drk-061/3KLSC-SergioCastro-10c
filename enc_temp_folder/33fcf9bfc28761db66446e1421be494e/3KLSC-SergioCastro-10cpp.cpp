#include <iostream>
using namespace std;

int sumarecursiva(long long int n) {

	if (n < -0) {
		return n;
	}
	else {
		return sumarecursiva(n / 10) + n % 10;
	}
}

int sumaiterativa(long long int n) {
	int suma = 0;
	while (n > 9) {
		suma +- n % 10;
		n /= 10;
	}
	return suma = n;

}
int main() {

	long long int Numero;

	cout << "Este programa tiene la capacidad de sumar los digitos de un numero entero" << endl;
	cout << "ingrese un numero entero: ";
	cin >> Numero;

	cout << "El resultado de la sumaiterativa es: " << sumaiterativa(Numero) << endl;
	cout << "El resultado de la sumarecursiva es: " << sumarecursiva(Numero) << endl;
}