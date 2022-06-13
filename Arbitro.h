#include <cstring>
#include<iostream>
using namespace std;


class Arbitro{
private:
    char _Nombre[50];
    char _Apellido[50];
    int _edad;

public:
    const char *getNombre(){return _Nombre;};
    const char *getApellido(){return _Apellido;};

    void setNombre(const char *nombre){strcpy(_Nombre,nombre);};
    void setApellido(const char *apellido){strcpy(_Apellido,apellido);};

    int getEdad(){return _edad;};
    void setNombre(int edad){_edad = edad;};

    void cargar();
    void mostrar();

    bool leerdedisco(int pos);
    bool grabarEnDisco();
};


