#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Arbitro.h"
using namespace std;


void Arbitro::cargar(){
    cout<<"Ingrese el nombre del arbitro: "<<endl;
    cin>>_Nombre;
    cout<<"Ingrese el apellido del arbitro: "<<endl;
    cin>>_Apellido;
    cout<<"Ingrese la edad del arbitro: "<<endl;
    cin>>_edad;
}

void Arbitro::mostrar(){
    cout<<"Nombre del arbitro: "<<endl;
    cout<<_Nombre<<endl;
    cout<<"Apellido del arbitro: "<<endl;
    cout<<_Apellido<<endl;
    cout<<"Edad del arbitro: "<<endl;
    cout<<_edad<<endl;
}


bool Arbitro::leerdedisco(int pos){
    FILE *p;
    p=fopen("Arbitro.dat","rb");
    if(p==NULL){
        return -1;
    }
    fseek(p, sizeof(Arbitro)*pos,0);
    bool leyo=fread(this, sizeof(Arbitro),1, p);
    fclose(p);
    return leyo;
}

bool Arbitro::grabarEnDisco(){
    FILE *p;
    p=fopen("Arbitro.dat","ab");
    if(p==NULL){
        return -1;
    }
    bool guardo=fwrite(this, sizeof(Arbitro),1, p);
    fclose(p);
    return guardo;
}
