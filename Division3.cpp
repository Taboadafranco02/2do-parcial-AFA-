#include <cstdlib>
#include <cstdio>
#include <cstring>
#include<iostream>
#include "Partido.h"
using namespace std;



int leerDeDiscoDiv3(int pos){
    FILE *p;
    Equipo reg;
    int leyo;
    p=fopen("Division3.dat", "rb");
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


void JugarFechaDiv3(){

};

void ConsultarMenuDiv3(){

};

void ConsultarEstadisticasDiv3(){

};

void todosEnTrueDiv3(){
    int pos=0;
    Equipo reg;
    while(leerDeDiscoDiv3(pos)==1){
        if(reg.getEstado()==false){
            reg.setEstado(true);
        };
        pos++;
    };
};

