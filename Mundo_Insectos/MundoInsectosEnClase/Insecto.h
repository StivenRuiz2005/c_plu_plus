#ifndef INSECTO_H
#define INSECTO_H

#include <iostream>
using namespace std;

class Insecto
{
    private:
        int posx;
        int posy;
        char caracter;
    public:
        // constructor por defecto
        Insecto() {
            posx=0;
            posy=0;
            caracter=' ';
        }

        // Constructor alternativo
        Insecto(int x,int y,char c){
            posx=x;
            posy=y;
            caracter=c;
        }

        virtual ~Insecto() {}

        void MoverInsecto(int x, int y){
            // validar que el insecto no se salga de su mundo
            if((x>=0 && x<12) && (y>=0 && y<12)){
                posx = x;
                posy = y;
            }
        }

        int GetPosX(){
            return posx;
        }

        int GetPosY(){
            return posy;
        }

        int GetCaracter(){
            return caracter;
        }

    protected:


};

#endif // INSECTO_H
