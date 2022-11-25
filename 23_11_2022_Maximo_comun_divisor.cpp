// 23_11_2022_Maximo_comun_divisor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Daniel Medina 
//Ejercicio: Calcular el Máximo Común Divisor de dos números



#include <iostream>


int MCD(int x, int y) {

	if (y == 0) {

		return x;
	}
	else
	{
		MCD(y, x % y);
	}
}

int main() 
{
	int n1 = 24, n2 = 18;
	std::cout << "Ingresa el primer digito\n";
	std::cin >> n1;
	std::cout << "Ingresa el segundo numero\n";
	std::cin >> n2;
	std::cout << "El Mayor comun divisor de "<<n1<<" y "<<n2<<" es: " << MCD(n1, n2) <<std::endl;


	std::cout << MCD(n1, n2);
	
     



}

