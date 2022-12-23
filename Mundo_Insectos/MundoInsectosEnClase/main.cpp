#include <iostream>
#include<Tablero.h>
#include<windows.h>
#include<ctime>

using namespace std;

int cantidad = 1; // 1 es la cantidad minima de insectos que debe haber segun el diagrama de clases

int main()
{
    cout << " *** EL MUNDO DE LOS INSECTO *** " << endl;
    do{
        cout << "Cuantos insectos desea crear? " << endl;
        cout << "Ingrese minimo 1 y maximo 10: ";
        cin >> cantidad;
    }while(!(cantidad>=1 && cantidad<=10));
    Tablero miTablero;
    miTablero.InicializarMatriz();
    miTablero.CrearInsectos(cantidad);
    miTablero.VisualizarMatriz();
    Sleep(1000);
    for(;;){
        Sleep(500);
        system("CLS");
        cout << " *** EL MUNDO DE LOS INSECTO *** " << endl;
        miTablero.MoverInsectos();
        miTablero.VisualizarMatriz();
    }

    return 0;
}
