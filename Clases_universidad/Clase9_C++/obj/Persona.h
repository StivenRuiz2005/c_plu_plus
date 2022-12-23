#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    public:
        Persona() {}
        virtual ~Persona() {}

        int Getcedula() { return cedula; }
        void Setcedula(int val) { cedula = val; }
        int Getedad() { return edad; }
        void Setedad(int val) { edad = val; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }

    protected:

    private:
        int cedula;
        int edad;
        string nombre;
};

#endif // PERSONA_H
