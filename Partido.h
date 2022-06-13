#ifndef PARTIDO_H_INCLUDED
#define PARTIDO_H_INCLUDED
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include<iostream>
#include "Equipo.h"
#include "Fecha.h"
#include "Arbitro.h"
#include "Estadio.h"
using namespace std;

class Partido{
private:
    Equipo _local;
    Equipo _visitante;
    Fecha _fechaPartido;
    Arbitro _arbitro;

public:
    Equipo getLocal(){return _local;};
    Equipo getVisitante(){return _visitante;};

    void setLocal(Equipo local){_local = local;};
    void setVisitante(Equipo visitante){_visitante = visitante;};

    void ArmarPartidoDiv1();
    void ArmarPartidoDiv2();
    void ArmarPartidoDiv3();
};



#endif // PARTIDO_H_INCLUDED
