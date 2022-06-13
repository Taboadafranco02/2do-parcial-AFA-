#include <cstdlib>
#include <cstdio>
#include <cstring>
#include<iostream>
#include "Partido.h"
using namespace std;



int leerDeDiscoDiv2(int pos){
    FILE *p;
    Equipo reg;
    int leyo;
    p=fopen("Division2.dat", "rb");
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

void JugarFechaDiv2(){

};

void ConsultarMenuDiv2(){

};

void ConsultarEstadisticasDiv2(){

};

void todosEnTrueDiv2(){
    int pos=0;
    Equipo reg;
     while(leerDeDiscoDiv2(pos)==1){
        if(reg.getEstado()==false){
            reg.setEstado(true);
        };
        pos++;
    };
};


