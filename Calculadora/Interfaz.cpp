#include "Interfaz.h"
#include "Calculadora.h"
#include <iostream>
using namespace std; 

void Interfaz::mostrarMenu() {
	cout << "\n--- CALCULADORA ---\n";
	cout << "1. Sumar\n";
	cout << "2. Restar\n";
	cout << "3. Multiplicar\n";
	cout << "4. Dividir\n";
	cout << "0. Salir\n";
	cout << "Seleccione una opcion: ";
}

void Interfaz::iniciar() {
	Calculadora calc;
	int opcion;
	double a, b;
	
	do {
		mostrarMenu();
		cin >> opcion;
		
		if (opcion >= 1 && opcion <= 4) {
			cout << "Ingrese el primer numero: ";
			cin >> a;
			cout << "Ingrese el segundo numero: ";
			cin >> b;
		}
		
		switch (opcion) {
		case 1: cout << "Resultado: " << calc.sumar(a, b) << "\n"; break;
		case 2: cout << "Resultado: " << calc.restar(a, b) << "\n"; break;
		case 3: cout << "Resultado: " << calc.multiplicar(a, b) << "\n"; break;
		case 4: 
			if (b != 0)
				cout << "Resultado: " << calc.dividir(a, b) << "\n";
			else
				cout << "Error: division por cero.\n";
			break;
		case 0: cout << "Saliendo...\n"; break;
		default: cout << "Opcion invalida\n";
		}
		
	} while (opcion != 0);
}
