#ifndef MAPA_H
#define MAPA_H
#include <Personas.h>
#include <iostream>
#include <stdlib.h>


class Mapa
{
public:
    Mapa()
    {
        punto='.';
    }
    virtual ~Mapa(){}

//================================================================


    void CrearSoldados()
    {

        Personas oleh= Personas(0,0,'O');
        Personas yaro= Personas(5,0,'Y');

        soldados[0]= oleh;
        soldados[1]= yaro;
        ActualizarMatriz(oleh.Getposx(),oleh.Getposy(),oleh.Getnombre());
        ActualizarMatriz(yaro.Getposx(),yaro.Getposy(),yaro.Getnombre());

    }
    void ActualizarMatriz(int x, int y, char c)
    {
        matriz[x][y] = c;
    }
    void InicializarMatriz()
    {
        for(int i=0; i<12; i++)
        {
            for(int j=0; j<12; j++)
            {
                matriz[i][j] = punto;
            }
        }
        matriz[0][3]='R';
        matriz[2][3]='R';
        matriz[3][3]='R';
        matriz[5][3]='R';

        matriz[5][6]='A';
        matriz[0][6]='B';
    }
    void VisualizarMatriz()
    {
        std::cout << std::endl;
        for(int i=0; i<6; i++)
        {
            for(int j=0; j<7; j++)
            {
                std::cout << " " << matriz[i][j];
            }
            std::cout << std::endl;
        }
    }
    bool ValidarDestino(int x,int y,int op)
    {
            bool valido = false;
            if(matriz[x][y]=='.' || matriz[x][y]=='A' || matriz[x][y]=='B' || matriz[x][y]=='R' ){
               valido = true;

            }
            else if (matriz[x][y]=='O'){
                std::cout<<"Campo ocupado - PROHIBIDO EL PASO" << std::endl;
                valido = false;
                system("PAUSE");
            }
            else if (matriz[x][y]=='Y'){
                std::cout<<"Campo ocupado - PROHIBIDO EL PASO" << std::endl;
                valido = false;
                system("PAUSE");

            }
            return valido;
        }

    void Movimiento()
    {
         int opcion;
         std::cout<< "A quien deseas mover : 0, Oleh  : 1, Yaroslav" << std::endl;
         std::cin>>opcion;
         if (opcion == 0 || opcion == 1){
            int posx_anterior= soldados[opcion].Getposx();
            int posy_anterior= soldados[opcion].Getposy();
            int posx_destino=0;
            int posy_destino=0;
            std::cout<<"Hacia que direccion deseas mover: \n 1.norte \n 2. sur \n 3. este \n 4. oeste \n 5. noreste \n 6. noroeste \n 7. sureste \n 8. suroeste" << std::endl;
            int movimiento=0;
            std::cin>>movimiento;
            switch(movimiento){
                    case 1:
                        posx_destino = posx_anterior -1;
                        posy_destino = posy_anterior;
                        break;
                    case 2:
                        posx_destino = posx_anterior +1;
                        posy_destino = posy_anterior;
                        break;
                    case 3:
                        posx_destino = posx_anterior;
                        posy_destino = posy_anterior +1;
                        break;
                    case 4:
                        posx_destino = posx_anterior;
                        posy_destino = posy_anterior -1;
                        break;
                    case 5:
                        posx_destino = posx_anterior -1;
                        posy_destino = posy_anterior +1;
                        break;
                    case 6:
                        posx_destino = posx_anterior -1;
                        posy_destino = posy_anterior -1;
                        break;
                    case 7:
                        posx_destino = posx_anterior +1;
                        posy_destino = posy_anterior +1;
                        break;
                    case 8:
                        posx_destino = posx_anterior +1;
                        posy_destino = posy_anterior -1;
                        break;
                    default:
                        posx_destino = posx_anterior;
                        posy_destino = posy_anterior;
                        break;
                }
            if (ValidarDestino(posx_destino,posy_destino,opcion) && comprobarficha(soldados[opcion].Getnombre())){
            soldados[opcion].Moverjugador(posx_destino,posy_destino);
            ActualizarMatriz(posx_anterior,posy_anterior,'.');
            ganador(soldados[opcion].Getposx(),soldados[opcion].Getposy(),soldados[opcion].Getnombre());
            perderficha(soldados[opcion].Getposx(),soldados[opcion].Getposy(),soldados[opcion].Getnombre(),opcion);
            ActualizarMatriz(soldados[opcion].Getposx(),soldados[opcion].Getposy(),soldados[opcion].Getnombre());

        }

    }
    }
    void ganador(int x, int y, char c)
    {
        if (x == 5 && y== 6 && c== 'O'){
            std::cout<< "Has logrado tu objetivo"<< std::endl;
            std::cout<< "El soldado  Oleh ha logrado regresar a salvo y con la informacion"<<std::endl;
            soldados[0].jugadorganador(c);
            system("PAUSE");
        }
        else if (x == 0 && y== 6 && c=='Y'){
            std::cout<< "Has logrado tu objetivo"<< std::endl;
            std::cout<< "El soldado  Yaroslav ha logrado regresar a salvo y con la informacion"<<std::endl;
            soldados[0].jugadorganador(c);
            system("PAUSE");
        }

    }
    void perderficha(int x, int y,char c,int op)
    {
        if ( (y == 3)&&(x== 0 ||x== 2 ||x== 3 || x== 5)){
            std::cout<<"Has sido capturado y seras sometido a prision"<< std::endl;
            soldados[op].eliminarjugador(c);
            system("PAUSE");
        }
    }
    bool comprobarficha(char c)
    {
     if (c=='R'){
        std::cout<<"No se puede mover esta ficha"<< std::endl;
        system("PAUSE");
        return false;
     }
     else if (c=='A'){
        std::cout<<"No se puede mover esta ficha"<< std::endl;
        system("PAUSE");
        return false;
     }
     else if (c=='B'){
        std::cout<<"No se puede mover esta ficha"<< std::endl;
        system("PAUSE");
        return false;
     }
    else{
        return true;
    }
     }
// =================================================================================
protected:

private:
        char matriz[6][7];
        Personas soldados[2];
        char punto;
        int c_soldados;
        int c_enemigos;
};

#endif // MAPA_H
