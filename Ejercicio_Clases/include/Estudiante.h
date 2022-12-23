#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

using namespace std;

class estudiante
{
    public:
        estudiante() {}

        virtual ~estudiante() {}

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        int Getcodigo() { return codigo; }
        void Setcodigo(int val) { codigo = val; }
        float Getnota() { return nota; }
        void Setnota(int val) { nota = val; }

        void visualizarEstudiantes(){
            cout << "Nombre: " << nombre << endl;
            cout << "Codigo: " << codigo << endl;
            cout << "Nota: " << nota << endl;
        }

    protected:

    private:
        string nombre;
        int codigo;
        float nota;
};

#endif // ESTUDIANTE_H
