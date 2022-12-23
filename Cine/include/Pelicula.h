#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>

using namespace std;

class Pelicula
{
    public:
        Pelicula() {
        titulo=" ";
        duracion=0;
        edadMinima=0;
        genero=" ";
        n_director= " ";
        precio=0;
        }

        void Settitulo(string val) { titulo = val; }
        string Gettitulo(){return titulo;}

        void Setduracion(int val) { duracion = val; }
        int Getduracion(){return duracion;}

        void SetedadMinima(int val) { edadMinima = val; }
        int GetedadMinima(){return edadMinima;}

        void Setgenero(string val) { genero = val; }
        string Getgenero(){return genero;}

        void Setn_director(string val) { n_director = val; }
        string Getdirector(){return n_director;}

        void Setprecio(int val) { precio = val; }
        int Getprecio(){return precio;}

        virtual ~Pelicula() {}

    protected:

    private:
        string titulo;
        int duracion;
        int edadMinima;
        string genero;
        string n_director;
        int precio;
};

#endif // PELICULA_H
