#ifndef BODEGA_H
#define BODEGA_H
#include <iostream>

using namespace std;

class Bodega
{
    public:
        Bodega() {
            identificador=0;
            c_litros=0;
            precio=0;
            marca=" ";

        }
        Bodega(int identificador_,float c_litros_,int precio_,string marca_){

            identificador=identificador_;
            c_litros=c_litros_;
            precio=precio_;
            marca=marca_;

        }
        virtual ~Bodega() {}

        int Getidentificador() { return identificador; }
        void Setidentificador(int val) { identificador = val; }
        float Getc_litros() { return c_litros; }
        void Setc_litros(float val) { c_litros = val; }
        int Getprecio() { return precio; }
        void Setprecio(int val) { precio = val; }
        string Getmarca() { return marca; }
        void Setmarca(string val) { marca = val; }



    protected:
        int identificador;
        float c_litros;
        int precio;
        string marca;

    private:
};

#endif // BODEGA_H
