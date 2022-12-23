#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H
#include<iostream>

using namespace std;

class Estudiantes
{
    public:
        Estudiantes() {}
        virtual ~Estudiantes() {}

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        int Getcodigo() { return codigo; }
        void Setcodigo(int val) { codigo = val; }
        float Getnota() { return nota; }
        void Setnota(float val) { nota = val; }

    protected:

    private:
        string nombre;
        int codigo;
        float nota;
};

#endif // ESTUDIANTES_H
