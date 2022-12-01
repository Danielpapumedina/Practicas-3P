// 25_11_2022_018_Producto_de_dos_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Daniel Medina 
//Determinar el producto de dos numeros de manera recursiva

#include <iostream>

int productoDosNumeros(int multiplicando, int multiplicador);


int main()
{
    int multiplicando; 
    int multiplicador;

    std::cout << "Calculadora del producto de dos numeros es" << std::endl;
    std::cout << "Ingresa el multiplicando";
    std::cin >> multiplicando;
    std::cout << "Ingresa el multiplicador";
    std::cin >> multiplicador;

    std::cout << "El resultado de " << multiplicando << " y " << multiplicador << " es: " << productoDosNumeros(multiplicando, multiplicador) << std::endl;

    return 0;
}

int productoDosNumeros(int multiplicando, int multiplicador) 
{
    if (multiplicando == 0 || multiplicador == 0)
    {
        return 0;
    }
    
    if (multiplicador == 1)
    {
        return multiplicando;
    }
    if (multiplicando == 1)
    {
        return multiplicador;
    }
    else
    {
        return multiplicando + productoDosNumeros(multiplicando, multiplicador - 1);
    }
}
