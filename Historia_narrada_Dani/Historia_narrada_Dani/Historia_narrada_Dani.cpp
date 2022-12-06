// Historia narrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Daniel Medina 
//Zombitches

#include <iostream>
#include <Windows.h>

int opc1, opc2;
int eleccion;

int main()
{
    do
    {

        setlocale(LC_ALL, "es_ES.UTF-8");

        std::cout << "Es 2025\n";
        std::cout << "Eres el tipico chico de universidad encerrado en su casa jugando videojuegos un fin de semana cuando de pronto\n";
        std::cout << "en uno de tus monitores donde ves las noticias, vez a un reportero diciendo que hay una horda de zombies en todo el país y que por ningún motivo le abramos la puerta a nadie.\n";
        std::cout << "El televisor muestra una imagen con instrucciones y medidas de protección y despues la señal se va.\n";
        std::cout << "Estas por tu cuenta\n";
        Sleep(9000);
        system("cls");
        std::cout << "¡Zombitches!\n";
        Sleep(4000);
        system("cls");
        std::cout << "Te quedas petrificado mirando la televisión cuando recuerdas a tu madre que vive a unas 10 cuadras de distancia pero no tienes auto debes armarte con lo que tengas y salir “o” te quedas a jugar una partida más.\n";
        std::cout << "Opcion 1: Ir por tu madre aunque te cueste la vida\n";
        std::cout << "Opcion 2: Quedarte a jugar una partida mas\n";
        std::cin >> eleccion;

        if (eleccion == 1)
        {
            std::cout << "Escogiste el caso 1: Sales tan deprisa de tu casa que olvidas abrocharse los zapatos y te caes llamando la atención de unos zombies.\n";
            std::cout << "Opción 1: Te levantas y sigues corriendo\n";
            std::cout << "Opción 2: Amarras los zapatos y ahora si corres\n";
            std::cin >> eleccion;
            if (eleccion == 1) {
                std::cout << "Lograste correr pero volviste a caer porque no abrocharse los zapatos y te atraparon. “Moriste”\n";
            }
            else {
                std::cout << " Lo lograste, escapaste de los zombies pero no olvides volver a abrocharse los zapatos\n";
                std::cout << "Continuas caminando y el camino te topas a una mujer que ha sido mordida, está asustada y te pide ayuda.\n";
                std::cout << "Opcion 1: La ayudas\n";
                std::cout << "Opcion 2: Le dices “A un lado mija”\n";
                std::cin >> eleccion;
                if (eleccion == 1) {
                    std::cout << "Escogiste la opcion 1: La mujer a mitad del camino te ataca y le das zapes llamando la atencion de los demas zombies al rededor, Ahora te persigue una orda de zombies\n";
                    std::cout << "Como pudiste, haz llegado a casa de tu madre pero tienes una manada de zombies golpeando a la puerta\n";
                    std::cout << "Opcion 1: Abrazas a tu madre y aprovechan sus ultimos momentos juntos\n";
                    std::cout << "Opcion 2: Sales por la puerta trasera atrayendo la atencion de la orda y sacrificando tu vida en el acto pero tu madre quedara con vida\n";
                    std::cin >> eleccion;
                    if (eleccion == 1) {
                        std::cout << "Tu y tu madre tuvieron un final terrible pero almenos estuvieron juntos hasta el final\n" << " Fin " << std::endl;
                        std::cout << "Gracias por jugar Zombitches, si tu final no fue de tu agrado puedes volver a jugar y descubrir un mejor final" << std::endl;
                    }
                    else {
                        std::cout << "Esogiste sacrificar tu vida para que tu madre se salvara, eres un heroe.\n" << " Fin " << std::endl;
                        std::cout << "Gracias por jugar Zombitches, si tu final no fue de tu agrado puedes volver a jugar y descubrir un mejor final" << std::endl;
                    }
                }
                else {
                    std::cout << "Escogiste la Opcion 2: Te salvaste, pobre mujer pero al menos continuas tu camino tranquilamente\n";
                    std::cout << "Despues de una larga caminata haz llegado a casa de tu mama\n";
                    std::cout << "Tienes dos entradas, la puerta o la ventana\n";
                    std::cout << "Opcion 1: Puerta\n";
                    std::cout << "Opcion 2: Ventana\n";
                    std::cin >> eleccion;
                    if (eleccion == 1) {
                        std::cout << "Asustaste a tu mama y le dio un infarto" << " Fin " << std::endl;
                    }
                    else {
                        std::cout << "Encuentras a tu madre traquila en el sillon de su sala" << std::endl;

                        std::cout << "La abrasas y encienden la TV y ven que en las noticias dicen que pronto llegara el ejercito con los rescatistas,\n" << " Fin " << std::endl;
                        std::cout << "Gracias por jugar Zombitches, si tu final no fue de tu agrado puedes volver a jugar y descubrir un mejor final" << std::endl;
                    }
                }
            }
        }
        else {
            std::cout << "Escogiste el caso 2: Se te hizo tarde, con el ruido del videojuego captas la atención de los zombies quienes ya están afuera de tu puerta.\n";
            std::cout << "Opción 1: saltas por la ventana\n";
            std::cout << "Opción 2: te quedas quieto e imploras que no te encuentren.\n";
            std::cin >> eleccion;
            if (eleccion == 1)
            {
                std::cout << "Caíste sobre un chihuahua lo cual amortiguar tu caída y corres a toda velocidad a casa de tu mama\n";
                std::cout << "Continuas caminando y el camino te topas a una mujer que ha sido mordida, está asustada y te pide ayuda.\n";
                std::cout << "Opcion 1: La ayudas\n";
                std::cout << "Opcion 2: Le dices “A un lado mija”\n";
                std::cin >> eleccion;
                if (eleccion == 1) {
                    std::cout << "A mitad del camino la mujer se vuelve un zombie y te ataca haciendo que te alejes mucho mas de tu destino pero almenos resultas ileso\n";
                    std::cout << "Por culpa de ese desvio se te hizo todavia mas tarde y estas preocupado por tu madre\n";
                    std::cout << "Despues de una larga caminata haz llegado a casa de tu mama pero......\n";
                    std::cout << "Tardaste tanto en ir por tu mama que al parecer un zombie entro y la mordio y ahora estas frente a tu madre quien es ahora un zombie por tu culpa\n";

                }
                else {
                    std::cout << "Te metio un plomazo por OGT" << " Fin " << std::endl;
                }

            }
            else {
                std::cout << " Te encontraron. ¡moriste!\n";
            }
        }
        std::cout << "Quieres volver a empezar el juego?\n";
        std::cout << "Si    No";
        std::cin >> eleccion;
        system("CLS");
    } while (eleccion);
}