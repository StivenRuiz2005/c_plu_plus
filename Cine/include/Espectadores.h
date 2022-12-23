#ifndef ESPECTADORES_H
#define ESPECTADORES_H
#include <iostream>

using namespace std;


class Espectadores
{
    public:
        Espectadores() {
        id=0;
        nombre=" ";
        apellido=" ";
        dinero=1;
        edad=0;
        posicion="Ninguna";
        }
        virtual ~Espectadores() {}

        int Getid() { return id; }
        void Setid(int val) { id = val; }

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }

        string Getapellido() { return apellido; }
        void Setapellido(string val) { apellido = val; }

        int Getdinero() { return dinero; }
        void Setdinero(int val) { dinero = val; }

        int Getedad() { return edad; }
        void Setedad(int val){ edad = val;}

        string Getposicion() { return posicion; }
        void Setposicion(string val) { posicion = val; }

    protected:

    private:
        int id;
        string nombre;
        string apellido;
        int dinero;
        int edad;
        string posicion;
};

#endif // ESPECTADORES_H
