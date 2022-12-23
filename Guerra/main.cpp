/*
Programa: Parcial 2
Programadores: Carlos Stiven Ruiz Rojas (2259629) - Jhonny fernando duque (2259398)
Correo: carlos.stiven.ruiz@correounivalle.edu.co - jhony.duque@correounivalle.edu.co
Descripcion: Guerra
Version: 1.0
Fecha de creacion: 28/11/22
Fecha de ultima modificacion: 29/11/22
*/

#include <iostream>
#include <Mapa.h>
#include <Personas.h>
#include<windows.h>
#include<ctime>
using namespace std;

int main()
{
    Mapa miMapa;
    miMapa.InicializarMatriz();
    miMapa.CrearSoldados();
    for(;;){
        Sleep(500);
        cout << " *** BIENVENIDOS A LA GUERRA *** " << endl;
        miMapa.VisualizarMatriz();
        miMapa.Movimiento();
        system("CLS");
    }

    return 0;
}
