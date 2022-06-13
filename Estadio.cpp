#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Estadio.h"
using namespace std;

void Estadio::cargar(){
    cout<<"ingrese el nombre del estadio: "<<endl;
    cin>>_nombreEstadio;
    cout<<"ingrese el lugar del estadio: "<<endl;
    cin>>_lugarEstadio;
}

bool Estadio::leerdedisco(int pos){
    FILE *p;
    p=fopen("Estadio.dat","rb");
    if(p==NULL){
        return -1;
    }
    fseek(p, sizeof(Estadio)*pos,0);
    bool leyo=fread(this, sizeof(Estadio),1, p);
    fclose(p);
    return leyo;
}

bool Estadio::grabarEnDisco(){
    FILE *p;
    p=fopen("Estadio.dat","ab");
    if(p==NULL){
        return -1;
    }
    bool guardo=fwrite(this, sizeof(Estadio),1, p);
    fclose(p);
    return guardo;
}

void Estadio::mostrar(){
    cout<<"nombre del estadio: "<<endl;
    cout<<_nombreEstadio<<endl;
    cout<<"lugar del estadio: "<<endl;
    cout<<_lugarEstadio<<endl;
}
