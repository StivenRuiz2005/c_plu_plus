#ifndef PERSONAS_H
#define PERSONAS_H

#include <iostream>

class Personas
{
    public:
        Personas() {
        posx=0;
        posy=0;
        nombre=' ';
        }

        Personas(int x,int y, char n){
        posx=x;
        posy=y;
        nombre=n;
        }
        virtual ~Personas() {}

        int Getposx() { return posx; }
        void Setposx(int val) { posx = val; }
        int Getposy() { return posy; }
        void Setposy(int val) { posy = val; }
        char Getnombre() { return nombre; }
        void Setnombre(char val) { nombre = val; }

        void Moverjugador(int x, int y){
            if((x>=0 && x<6) && (y>=0 && y<7)){
                posx = x;
                posy = y;
            }
        }
        void eliminarjugador(char c){
            c='R';
            nombre=c;
        }
        void jugadorganador(char c){
            if (c=='O'){
                c='A';
                nombre=c;
            }
            if (c=='Y'){
                c='B';
                nombre=c;
            }

        }
    protected:

    private:
        int posx;
        int posy;
        char nombre;
};

#endif // PERSONAS_H
