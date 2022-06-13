#include <cstdlib>
#include <cstdio>
#include <cstring>
#include<iostream>
#include "Partido.h"
using namespace std;



int leerDeDiscoDiv1(int pos){
    FILE *p;
    Equipo reg;
    int leyo;
    p=fopen("Division1.dat", "rb");
    if(p==NULL){
        cout<<"ERROR DE ARCHIVO"<<endl;
        system("pause");
        return -1;
    }
    fseek(p, pos*sizeof(Equipo),0);
    leyo=fread(&reg,sizeof(Equipo),1,p);

    fclose(p);
    return leyo;
}

int buscarEquipoLocal(int codigoLocal){
    Equipo reg;
    int pos=0, aux = 0;
    while(leerDeDiscoDiv1(pos)==1){
            if(codigoLocal==reg.getCodEquipo()){
                reg.setEstado(false);
                aux=1;
            }
        pos++;
    };
    return aux;
}

int buscarEquipoVisitante(int codigoVisitante){
    Equipo reg;
    int pos=0, aux = 0;
    while(leerDeDiscoDiv1(pos)==1){
            if(codigoVisitante==reg.getCodEquipo()){
                reg.setEstado(false);
                aux=1;
            }
        pos++;
    };
    return aux;
}

void todosEnTrueDiv1(){
    int pos=0;
    Equipo reg;
    while(leerDeDiscoDiv1(pos)==1){
        if(reg.getEstado()==false){
            reg.setEstado(true);
        };
        pos++;
    };
};

void JugarFechaDiv1(){
    Partido reg;
    Equipo equi;
    int pos=0, cont_partidos = 0, codigoLocal, codigoVisitante;
    while(cont_partidos<3){
        while(leerDeDiscoDiv1(pos)==1){
            if(equi.getEstado()==true){
                    equi.mostrar();
            }
        }
        cout<<"Elija los equipos que desea enfrentar escribiendo su codigo: "<<endl;
        cout<<"Local: "<<endl;
        cin>>codigoLocal;
        while(buscarEquipoLocal(codigoLocal)!=1){
            system("cls");
            cout<<"Codigo incorrecto, ingreselo nuevamente"<<endl;
            cout<<"Local: "<<endl;
            cin>>codigoLocal;
        }
        cout<<"Visitante: "<<endl;
        cin>>codigoVisitante;
        while(buscarEquipoVisitante(codigoVisitante)!=1){
            system("cls");
            cout<<"Codigo incorrecto, ingreselo nuevamente"<<endl;
            cout<<"Visitante: "<<endl;
            cin>>codigoVisitante;
        }
        cont_partidos++;
    }
    todosEnTrueDiv1();
}

void ConsultarMenuDiv1(){

};

void ConsultarEstadisticasDiv1(){

};
