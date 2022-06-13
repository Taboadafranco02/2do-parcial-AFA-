#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

class Estadio{
private:
    char _nombreEstadio[50];
    char _lugarEstadio[50];


public:
    const char *getNombreEstadio(){return _nombreEstadio;};
    const char *getLugatEstadio(){return _lugarEstadio;};

    void setNombreEstadio(const char *n){strcpy(_nombreEstadio,n);};
    void setLugarEstadio(const char *l){strcpy(_lugarEstadio,l);};

    void cargar();
    void mostrar();

    bool leerdedisco(int pos);
    bool grabarEnDisco();
};




#endif // ESTADIO_H_INCLUDED
