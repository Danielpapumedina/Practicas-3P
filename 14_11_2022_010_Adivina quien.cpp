// 14_11_2022_010_Adivina quien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Daniel Alejandro medina vazquez

#include <iostream>
using namespace std;
int main()
{
    bool x = false;
    cout << "Tu personaje tiene es alienigena?0.-No 1.-Si" << endl;
    cin >> x;

    if (x == true)//Alien
    {
        cout << "Tu personaje tiene es huerfano?0.-No 1.-Si" << endl;
        cin >> x;
        if (x == true)//Huerfano
        {
            cout << "Tu personaje tiene los calzones afuera??0.-No 1.-Si" << endl;
            cin >> x;
            if (x == true)//Calzones fuera
            {
                cout << "Tu personaje es superman" << endl;
            }
            else
            {
                //Sorry no hay nadie aquí
            }
        }
        else
        {
            //Sorry no hay nadie aquí
        }
    }
    else
    {
        //Sorry no hay nadie aquí
    }

           cout << "Tu personaje es un ser magico?0.-No 1.-Si" << endl;
           cin >> x;
           if (x == true) //Magico
           {
               cout << "Tu personaje usa casco?0.-No 1.-Si" << endl;
               cin >> x;
               if (x == true)//Casco
               {
                   cout << "Tu personaje vuela?0.-No 1.-Si" << endl;
                   cin >> x;
                   if (x == true)//Vuela
                   {
                       cout << "Tu personaje es Doctor Fate" << endl;
                   }
                   else
                   {
                       //Sorry no hay nadie aquí
                   }
               }
               else
               {
                   //Sorry no hay nadie aquí
               }
           }
              else
                {
                 //Sorry no hay nadie aquí
                }

                cout << "Tu personaje es un antiheroe?0.-No 1.-Si" << endl;
                cin >> x;
                if (x == true)//Anti heroe
                {
                    cout << "Tu personaje es temperamental0.-No 1.-Si" << endl;
                    cin >> x;
                    if (x == true)//Temperamento
                    {
                        cout << "Tu personaje a muerto en alguna ocasion?0.-No 1.-Si" << endl;
                        cin >> x;
                        if (x == true)//Muerto
                        {
                            cout << "Tu personaje es Redhood" << endl;
                        }
                        else
                        {
                            //Sorry no hay nadie aquí
                        }
                    }
                    else
                    {
                        //Sorry no hay nadie aquí
                    }

                }
                else
                {
                    //Sorry no hay nadie aquí
                }
                    

        cout << "Tu personaje es un villano?0.-No .-Si" << endl;
        cin >> x;
        if (x == true)//Villano
        {
            cout << "Usa maquillaje?0.-No .-Si" << endl;
            cin >> x;
            if (x == true)//Maquillaje
            {
                cout << "Hace chistes sadicos y sin sentido?0.-No .-Si" << endl;
                cin >> x;
                if (x == true)//Chistes
                {
                    cout << "Tu personaje es The joker" << endl;
                }
                else
                {
                    //Sorry no hay nadie aquí
                }
            }
            else
            {
                //Sorry no hay nadie aquí
            }
        }
        else
        {
            //Sorry no hay nadie aquí
        }
                cout << "Tu personaje usa capa?0.-No .-Si" << endl;
                cin >> x;
                if (x == true)//Capa
                {
                    cout << "Tiene un mayordomo?0.-No .-Si" << endl;
                    cin >> x;
                    if (x == true)//Mayordomo
                    {
                        cout << "Usa una mascara?0.-No .-Si" << endl;
                        cin >> x;
                        if(x==true)//Mascara
                        {
                        cout << "Tu personaje es batman" << endl;
                }
            }
       }
    }
        