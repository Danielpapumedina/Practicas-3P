// 22_11_2022_Palindroma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Medina
//Palindroma

#include <iostream>
#include <cstring>

using namespace std;

//Funcion palindroma
int palindroma(char palabra[], int posicioninicial, int posicionfinal);


int main()
{
    //Variables
    char palabra[20];
    int longitud, EsPalindroma;

    cout << "Escribe una palabra, veamos si es palindroma ";
    cin >> palabra,20;

    //Longitud
    longitud=strlen(palabra);

    //(palabra, inicia en 0, longitud -1(final de palabra))[5]{r,o,t,o,r}
    EsPalindroma = palindroma(palabra, 0, longitud - 1);

    //Es palindroma
    if (EsPalindroma == 1)
        cout << "La palabra Es palindroma\n";
    //No es palindroma
    else if (EsPalindroma == 0)
        std::cout << "\nLa palabra NO es palindroma\n";

    return 0;
    
}

int palindroma(char palabra[], int posicionInicial, int posicionFinal) {
    if (posicionInicial >= posicionFinal)
    {
        return 1;
    }
    if (palabra[posicionInicial] == palabra[posicionFinal])
    {
        palindroma(palabra, posicionInicial + 1, posicionFinal - 1);
    }
    else
    {
        return 0;
    }
}



