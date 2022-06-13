#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;


class Equipo{
    private:
        char _nombre[40];
        int _codEquipo;
        bool _estado;
        int _golesFavor;
        int _golesContra;
        int _partidosGanados;
        int _partidosEmpatados;
        int _partidosPerdidos;

    public:
        /*
        Equipo(const char *nombre, int codEquipo, bool estado);
        */
        const char *getNombre(){return _nombre;};
        void setNombre(const char *nombre){strcpy(_nombre, nombre);};

        int getCodEquipo(){return _codEquipo;};
        void setCodEquipo(int codigo){_codEquipo = codigo;};

        bool getEstado(){return _estado;};
        void setEstado(bool estado){_estado=estado;};

        int getGolesFavor(){return _golesFavor;};
        void setGolesFavor(int golesFavor){_golesFavor=golesFavor;};

        int getGolesContra(){return _golesContra;};
        void setGolesContra(int golesContra){_golesContra=golesContra;};

        int getPartidosGanados(){return _partidosGanados;};
        void setPartidosGanados(int partidoGanado){_partidosGanados=partidoGanado;};

        int getPartidosEmpatados(){return _partidosEmpatados;};
        void setPartidosEmpatados(int partidoEmpatado){_partidosEmpatados=partidoEmpatado;};

        int getPartidosPerdidos(){return _partidosPerdidos;};
        void setPartidosPerdidos(int partidoPerdido){_partidosPerdidos=partidoPerdido;};

        void cargar();
        void mostrar();

        int grabarEnDiscoDiv1(Equipo reg);
        int grabarEnDiscoDiv2(Equipo reg);
        int grabarEnDiscoDiv3(Equipo reg);

};

/*
Equipo::Equipo(const char *nombre="nada", int codEquipo=0, bool estado=true){
    strcpy(_nombre,nombre);
    _codEquipo =codEquipo;
    _estado = estado;
};
*/

