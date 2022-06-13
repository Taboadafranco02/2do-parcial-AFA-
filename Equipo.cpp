#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Equipo.h"

using namespace std;



void Equipo::cargar(){
    char nombre[40];
    int codEquipo;
    cout<<"Ingrese el nombre del equipo: "<<endl;
    cin>>nombre;
    cout<<"Ingrese el codigo del equipo: "<<endl;
    cin>>codEquipo;
    Equipo reg;
    reg.setNombre(nombre);
    reg.setCodEquipo(codEquipo);
};

void Equipo::mostrar(){
    cout<<_nombre << "----" << "Codigo del equipo: " << _codEquipo<<endl;
};


int Equipo::grabarEnDiscoDiv1(Equipo reg){
    FILE *p;
    p=fopen("Division1.dat", "ab");
    if(p==NULL){
        cout<<"ERROR DE ARCHIVO"<<endl;
        system("pause");
        return -1;
    };
    int escribio=fwrite(&reg,sizeof(Equipo),1,p);
    fclose(p);
    return escribio;
};

int Equipo::grabarEnDiscoDiv2(Equipo reg){
    FILE *p;
    p=fopen("Division2.dat", "ab");
    if(p==NULL){
        cout<<"ERROR DE ARCHIVO"<<endl;
        system("pause");
        return -1;
    };
    int escribio=fwrite(&reg,sizeof(Equipo),1,p);
    fclose(p);
    return escribio;
};

int Equipo::grabarEnDiscoDiv3(Equipo reg){
    FILE *p;
    p=fopen("Division3.dat", "ab");
    if(p==NULL){
        cout<<"ERROR DE ARCHIVO"<<endl;
        system("pause");
        return -1;
    };
    int escribio=fwrite(&reg,sizeof(Equipo),1,p);
    fclose(p);
    return escribio;
};
