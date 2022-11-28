// P017_Potencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Potencia con Recursividad: Ejercicio: Determinar la potencia de un numero con funciones recursivas
//Daniel Medina

#include <iostream>

using namespace std;


    int potencia(int base, int exponente) {
        if (exponente == 0)
        {
            return 1;
        }
        if (exponente == 1)
        {
            return base;
        }
        else
        {
            return base * potencia(base, exponente - 1);
        }
    }
    int main()
    {
        int base, exponente;
        cout << "Calculadora de potencia " << endl << endl;
        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese el exponente: ";
        cin >> exponente;

        cout << "\n" << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << endl;

        return 0;
    } 

