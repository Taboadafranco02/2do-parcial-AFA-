#include <iostream>
#include <cstring>
#include "MenuDivisiones.h"
using namespace std;


void menuDivision1(){
    cout<<"Bienvenidos a la division 1"<<endl;
    int opcion=1;
    while(opcion!=0){
        system("cls");
        cout << "\n\n\t\t\tElija la accion que desee hacer" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Armar una fecha" << endl;
        cout << "\t2. Consultar tabla" << endl;
        cout << "\t3. Consultar estadísticas" << endl;
        cout << "\t0. SALIR" << endl<<endl;
        cout<<"Accion: ";
        cin>>opcion;
        switch(opcion){
            case 1: JugarFechaDiv1();
            break;
            case 2: ConsultarMenuDiv1();
            break;
            case 3: ConsultarEstadisticasDiv1();
            break;
            case 0:
            break;
            default:cout<<"Opcion incorrecta, vuelva a ingresar su opcion"<<endl;
        };
    };
};

void menuDivision2(){
    cout<<"Bienvenidos a la division 1"<<endl;
    int opcion=1;
    while(opcion!=0){
        system("cls");
        cout << "\n\n\t\t\tElija la accion que desee hacer" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Armar una fecha" << endl;
        cout << "\t2. Consultar tabla" << endl;
        cout << "\t3. Consultar estadísticas" << endl;
        cout << "\t0. SALIR" << endl<<endl;
        cout<<"Accion: ";
        cin>>opcion;
        switch(opcion){
            case 1: JugarFechaDiv2();
            break;
            case 2: ConsultarMenuDiv2();
            break;
            case 3: ConsultarEstadisticasDiv2();
            break;
            case 0:
            break;
            default:cout<<"Opcion incorrecta, vuelva a ingresar su opcion"<<endl;
        }
    }


};

void menuDivision3(){
    cout<<"Bienvenidos a la division 1"<<endl;
    int opcion=1;
    while(opcion!=0){
        system("cls");
        cout << "\n\n\t\t\tElija la accion que desee hacer" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Armar una fecha" << endl;
        cout << "\t2. Consultar tabla" << endl;
        cout << "\t3. Consultar estadísticas" << endl;
        cout << "\t0. SALIR" << endl<<endl;
        cout<<"Accion: ";
        cin>>opcion;
        switch(opcion){
            case 1: JugarFechaDiv3();
            break;
            case 2: ConsultarMenuDiv3();
            break;
            case 3: ConsultarEstadisticasDiv3();
            break;
            case 0:
            break;
            default:cout<<"Opcion incorrecta, vuelva a ingresar su opcion"<<endl;
        }
    }


};
