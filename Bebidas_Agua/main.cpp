/*
Programa: Bodega de bebidas
Programadores: Carlos Stiven Ruiz Rojas (2259629)
Correo: carlos.stiven.ruiz@correounivalle.edu.co
Descripcion: Punto 1 Taller " FPOO
Version: 1.0
Fecha de creacion: 23/||/2022
Fecha de ultima modificacion: 23/||/2022
*/


#include <iostream>
#include <Agua_mineral.h>
#include <Bebida.h>

using namespace std;
int n=0;
int menu(int n);


int main()
{
    Bodega agua[10];
    Bodega bebidas[10];
    do
    {
    switch (menu(n))
    {
    case 1:{

    cout << "hola";
    }
        break;

    default:
        break;
    }

    } while (menu(n)!=7);

    return 0;
}

void menu(int n){
    cout << "1. Agregar producto \n 2. Eliminar Producto \n 3. Informacion todas las bebidas registradas. \n 4. Costo total bebidas por marca \n 5. Costo total bebidas estanteria agua mineral \n 6. Costo total estanteria bebidas azucaradas \n 7. Finalizar  \n"<< endl;
    cin>> n;
    return n;
}

