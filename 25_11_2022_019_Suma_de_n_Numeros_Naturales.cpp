// 25_11_2022_019_Suma_de_n_Numeros_Naturales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Suma de “n” Números Naturales
//Determinar la suma de los primeros “n” numeros naturales
//Daniel Medina

#include <iostream>

int sumadenumerosnaturales(int x);


int main()
{
	int x;
	std::cout << "Calculadora de la suma de los primeros 'n' numeros naturales" << std::endl;
	std::cout << "Ingrese una cantidad de numeros: "; std::cin >> x;
    for (int i = 1; i < x + 1; i++)
    {
        std::cout << i;
        if (i < x)
        {
            std::cout << " + ";
        }
    }
    std::cout << " = " << sumadenumerosnaturales(x) << std::endl;

	return 0;
}
int sumadenumerosnaturales(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumadenumerosnaturales(n - 1);
    }

}
