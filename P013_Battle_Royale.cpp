// P013_Battle_Royale.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Battle royale
//Daniel Medina

#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>
#include <conio.h>
struct propiedadesjuego
{
    bool partidacontinua;
    int jugadoresrestantes;
}battle;

struct propiedadesJugador
{
    std::string nombre;
    int vida = 0;
    int ataque = 0;
    int defensa = 0;
    int muertes = 0;
    int skills = 0;
    int velocidad = 0;
    bool vivo = true;

} jugadores[20];

//Funciones de pelea
void desarrolloPartida(int a, int b);
void Valores();
void Aviones();
void masKills();
void powerUp (int i);




int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    srand(time(0));

    //Jugadores 
    jugadores[1].nombre = "Pepe";
    jugadores[2].nombre = "callejas";
    jugadores[3].nombre = "Juan";
    jugadores[4].nombre = "Pompa";
    jugadores[5].nombre = "Emma";
    jugadores[6].nombre = "Mau";
    jugadores[7].nombre = "Pepe uwu";
    jugadores[8].nombre = "Paul";
    jugadores[9].nombre = "Julio";
    jugadores[10].nombre = "Jess";
    jugadores[11].nombre = "Angel";
    jugadores[12].nombre = "Chema";
    jugadores[13].nombre = "Kike";
    jugadores[14].nombre = "Flores";
    jugadores[15].nombre = "Betsa";
    jugadores[16].nombre = "Ulises";
    jugadores[17].nombre = "Juan fer";
    jugadores[18].nombre = "Patiño";
    jugadores[19].nombre = "Iker";
    for (int i = 0; i <= 19;i++)
    {
        jugadores[i].vida = rand() % 50;
        jugadores[i].ataque = rand() % 50;
        jugadores[i].defensa = rand() % 50;
        jugadores[i].velocidad = rand() % 50;

    }


    std::cout << "Battle royale but del salon" << std::endl;
    std::cout << "Como te llamas, guerrero" << std::endl;
    std::cin >> jugadores[0].nombre;

    std::cout << "Unete a los ingazos " << jugadores[0].nombre << ",tas chavo" << std::endl;
    std::cout << "Tus enemigos son los siguientes" << std::endl;
    for (int i = 0; i <= 19; i++)
    {
        std::cout << jugadores[i].nombre << std::endl;
    }
    system("pause");
    system("CSL");

    std::cout << "Que gane el mejor" << std::endl;
    system("CSL");

    std::cout << "jugadores restantes:" << battle.jugadoresrestantes << "\n" << std::endl;
    while (battle.partidacontinua)
    {
        int jugadorUno = rand() % 20;
        int jugadorDos = rand() % 20;
        int jugadorRand = rand() % 20;
        if ((jugadores[jugadorUno].vivo == true && jugadores[jugadorDos].vivo == true) && (jugadorUno != jugadorDos))
        {
            desarrolloPartida(jugadorUno, jugadorDos);
            if (jugadores[jugadorRand].vivo == true)
            {
                powerUp(jugadorRand);
            }
            masKills();
            _getch();
            return 0;
        }

    }
}
void desarrolloPartida(int a, int b)
{

    //Batalla de habilidades, el mejor gana
    if (jugadores[a].skills > jugadores[b].skills)
    {
        std::cout << jugadores[a].nombre << " esta peleando con " << jugadores[b].nombre << std::endl;
        if (jugadores[a].ataque > jugadores[b].defensa)
        {
            jugadores[b].defensa = 0;
        }
        else
        {
            for (int i = 0; jugadores[b].defensa <= 0; i++)
            {
                jugadores[b].defensa -= jugadores[a].ataque;
            }
            jugadores[b].defensa = 0;

        }
    }
    std::cout << jugadores[a].nombre << " le gana a " << jugadores[b].nombre << std::endl;
    if (jugadores[a].ataque > jugadores[b].vida)
    {
        std::cout << jugadores[a].nombre << " mato a " << jugadores[b].nombre << std::endl;
    }
    else
    {
        for (int i = 0; jugadores[b].vida <= 0; i++)
        {
            jugadores[b].vida -= jugadores[a].ataque;
        }
        std::cout << jugadores[a].nombre << " mato a " << jugadores[b].nombre << std::endl;



    }
}