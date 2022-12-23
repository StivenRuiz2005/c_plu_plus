#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <Insecto.h>
#include<windows.h>
#include<ctime>

using namespace std;

class Tablero
{
    private:
        char matriz[12][12];
        char caracter = '.';
        Insecto insectos[10];// maximo hasta 10 insectos
        int cantidadInsectos;
    public:
        Tablero() {}
        virtual ~Tablero() {}

        bool ValidarDestino(int x,int y){
            bool valido = false;
            if(matriz[x][y]=='.') valido = true;
            return valido;
        }

        void MoverInsectos(){
            int posx_anterior=0,posy_anterior=0;
            int posx_destino=0,posy_destino=0;
            int movimiento=0; // indica el tipo de movimiento a realizar
            srand(time(NULL));
            for(int i=0;i<cantidadInsectos;i++){
                posx_anterior = insectos[i].GetPosX();
                posy_anterior = insectos[i].GetPosY();
                do{
                    movimiento = 1 + rand()%(6+1-1);
                }while(!(movimiento>=1 && movimiento<=6));
                switch(movimiento){
                    case 1: // avanzar adelante
                        posx_destino = posx_anterior+1;
                        posy_destino = posy_anterior;
                        break;
                    case 2: // abajo
                        posx_destino = posx_anterior;
                        posy_destino = posy_anterior+1;
                        break;
                    case 3:
                        posx_destino = posx_anterior+1;
                        posy_destino = posy_anterior+1;
                        break;
                    case 4:
                        posx_destino = posx_anterior-1;
                        if(posx_destino<0) posx_destino = 0;
                        posy_destino = posy_anterior;
                        break;
                    case 5:
                        posx_destino = posx_anterior;
                        posy_destino = posy_anterior-1;
                        if(posy_destino<0) posy_destino = 0;
                        break;
                    case 6:
                        posx_destino = posx_anterior-1;
                        posy_destino = posy_anterior-1;
                        if(posx_destino<0) posx_destino = 0;
                        if(posy_destino<0) posy_destino = 0;
                        break;
                    default:
                        posx_destino = posx_anterior;
                        posy_destino = posy_anterior;
                        break;
                }
                if(ValidarDestino(posx_destino,posy_destino)){
                    insectos[i].MoverInsecto(posx_destino,posy_destino);
                    ActualizarMatriz(posx_anterior,posy_anterior,'.');
                    ActualizarMatriz(insectos[i].GetPosX(),
                                     insectos[i].GetPosY(),
                                     insectos[i].GetCaracter());
                }
            }

        }
        // Metodo para crear las instancia de la clase Insecto
        // segun una cantidad dada por el usuario
        void CrearInsectos(int c){
            cantidadInsectos = c;
            char car_insecto = 'X';
            for(int i=0;i<cantidadInsectos;i++){
                if(i%2==0){
                    car_insecto='X';
                }
                else{
                    car_insecto = 'O';
                }
                Insecto unInsecto(0,i,car_insecto);
                insectos[i] = unInsecto;
                ActualizarMatriz(unInsecto.GetPosX(),
                                 unInsecto.GetPosY(),
                                 unInsecto.GetCaracter());

            }

        }
        // metodo para actualizar la matriz con el caracter de akguno de los insectos
        // o con el punto para indicar posicion libre
        void ActualizarMatriz(int x, int y, char c){
            matriz[x][y] = c;
        }
        // inicializacion de la matriz rellenando con caracteres "."
        void InicializarMatriz(){
            for(int i=0;i<12;i++){
                for(int j=0;j<12;j++){
                    matriz[i][j] = caracter;
                }
            }
        matriz[0][3]="E";
        matriz[2][3]="E";
        matriz[3][3]="E";
        matriz[5][3]="E";
        }
        // visualizar la matriz del mundo
        void VisualizarMatriz(){
            cout << endl;
            for(int i=0;i<12;i++){
                for(int j=0;j<12;j++){
                    cout << "  " << matriz[i][j];
                }
                cout << endl;
                cout<< endl;
            }
        }

    protected:



};

#endif // TABLERO_H
