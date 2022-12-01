// 01_12_2022_P014_Decimal_a_Binario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ingresar un numero y mostrar su equivalente  en binario usando una función recursiva
//Daniel Medina

#include <iostream>


void binario(int num)

{
    if (num > 1)
    {
        binario(num / 2);
    }
    std::cout << num % 2;
}


int main()
{
    int num;

    std::cout << "Numero de decimal a binario\n";
    std::cin >> num;
    std::cout << "Numero binario: ";
    binario(num);


    return 0;

}

