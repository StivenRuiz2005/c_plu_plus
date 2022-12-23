/*
Programa: Punto_2
Nombres: Jhon Alejandro Martinez (2259565) , Carlos Stiven Ruiz (2259629), Jhonny Fernando Duque (2259398)
Correos: jhon.alejandro.martinez@correounivalle.edu.co, carlos.stiven.ruiz@correounivalle.edu.co, jhony.duque@correounivalle.edu.co
Descripcion: Solucion del problema 2 del taller
Version: 1.0
Fecha de creacion: 30/11/2022
Fecha de la ultima modificacion: 1/12/2022
*/

#include <iostream>
#include <Sala.h>
 using namespace std;

int main()
{
    int r=0;
    cout<<"Ingrese la cantidad de Usuarios a simular: "<< endl;
    cin>>r;
    if (r>36){
       while(r>36){
        cout<<"Datos Invalidos"<< endl;
        cout<<"Ingrese la cantidad de Usuarios a simular: "<< endl;
        cin>>r;
       }
    }
    Sala cine;
    cine.CrearMatriz();
    cine.generarUsuarios(r);
    cine.registro_de_peliculas(1);
    cine.asignar_silla(r);
    return 0;
}
