#include <cstring>
#include<iostream>
using namespace std;


#ifndef FECHA_H
#define FECHA_H

class Fecha
{
    public:
        Fecha();
        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAnio();
        void setAnio(int anio);
        void mostrar();

    private:
        int _dia;
        int _mes;
        int _anio;
};



#endif // FECHA_H
