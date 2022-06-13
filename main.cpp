#include <iostream>
#include <cstring>
#include "MenuDivisiones.h"
using namespace std;
int main()
{
    int opcion=1;
    while(opcion!=0){
        system("cls");
        cout << "\n\n\t\t\tElija la categoria que desee" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Division 1" << endl;
        cout << "\t2. Division 2" << endl;
        cout << "\t3. Division 3" << endl;
        cout << "\t0. SALIR" << endl<<endl;
        cout<< "Division: ";
        cin>>opcion;
        switch(opcion){
            case 1: menuDivision1();
            break;
            case 2: menuDivision2();
            break;
            case 3: menuDivision3();
            break;
            case 0: cout<<"Gracias por participar en el armado de partidos"<<endl;
            break;
            default:cout<<"Opcion incorrecta, vuelva a ingresar su opcion"<<endl;
        };
    };


    return 0;
};


