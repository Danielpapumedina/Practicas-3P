// 31_10_2022_009_Matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Daniel Medina

#include <iostream>
using namespace std;

int main()
{
    int matriz3[3][3];
    int matriz5[5][5];
    int matriz10[10][10];

    //Matriz3
    int filasMatriz3 = (sizeof(matriz3) / sizeof(matriz3[0]));
    int columnasmatriz3 = (sizeof(matriz3[0]) / (sizeof(matriz3[0][0])));

    //Matriz5
    int filasmatriz5 = (sizeof(matriz5) / sizeof(matriz5[0]));
    int columnasmatriz5 = (sizeof(matriz5[0]) / sizeof(matriz5[0][0]));

    //Matriz10
    int filasmatriz10 = (sizeof(matriz10) / sizeof(matriz10[0]));
    int columnasmatriz10 = (sizeof(matriz10[0]) / sizeof(matriz10[0][0]));
    //Relleno de matriz 3*3
    for (int i = 0; i < filasMatriz3; i++)
    {
        for (int j = 0; j < columnasmatriz3; j++)
        {
            matriz3[i][j] = rand() % 10;
        }
    }
    //Muestreo de matriz
    for (int i = 0; i < filasMatriz3; i++)
    {
        for (int j = 0; j < columnasmatriz3; j++)
        {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Relleno de matriz 5*5
    for (int k = 0; k < filasmatriz5; k++)
    {
        for (int l = 0; l < columnasmatriz5; l++)
        {
            matriz5[k][l] = rand() % 10;
            cout << matriz5[k][l] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Muestreo de matriz 5*5
    for (int k = 0; k < filasmatriz5; k++)
    {
        for (int l = 0; l < columnasmatriz5; l++)
        {
            cout << matriz5[k][l] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Relleno de matriz 10*10
    for (int m = 0; m < columnasmatriz10; m++)
    {
        for (int n = 0; n < columnasmatriz10; m++)
        {
            cin >> matriz10[m][n];
        }
        cout << endl;
    }
    cout << endl;

    //Muestreo de matriz 10*10
    for (int m = 0; m < filasmatriz10; m++);
    {
        for (int n = 0; n < filasmatriz10; n++);
        {
            cout << matriz10[m][n] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Matriz dinamica
    int m, n;
    cin >> m >> n;
    int** arreglo = new int* [m];
    for (int i = 0; i < m; i++) {
        arreglo[i] = new int[n];
    }
    
        
 }
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
