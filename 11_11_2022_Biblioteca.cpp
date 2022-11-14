// 11_11_2022_Biblioteca.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>


int main()
{
    //Arreglos
    std::string libro[3];
    std::string nombre[3];
    std::string fecha[3];
    //Peticion de datos
    for (int i = 0; i < 3;i++)
    {
        std::cout << "ingresa el titulo del libro" << i << std::endl;
        std::cin >> libro[i];

        //Repetir para autor y fecha
        std::cout << "ingresa el nombre del autor" << i << std::endl;
        std::getline(std::cin, nombre[i]);
       

        std::cout << "ingresa la fecha que se estreno el libro" << i << std::endl;
        std::getline(std::cin, fecha[i]);

    }
    //Mostrar datos 
    for (int n = 0;n < 3;n++)
    {
        std::cout << "El titulo del libro" << n << "es:" << libro[n] << std::endl;
        std::cout << "El nombre del autor" << n << "es:" << nombre[n] << std::endl;
        std::cout << "La fecha de publicacion" << n << "es:" << fecha[n] << std::endl;
        
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
