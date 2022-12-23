#include <iostream>

using namespace std;

int main()
{
    /*
    =====================================================================================
    cout << "Arreglo: " << endl;
    int arreglo[2]={1,3};
    cout << arreglo[1];

    =====================================================================================

                    Ejercicio 1

    float nota=0;
    int estudiantes=0;
    float total=0;
    int superiores=0;

    cout<<"Cuantos estudiantes son: "<< endl;
    cin>>estudiantes;

    float promedio[estudiantes]={};

    for(int i=0;i<estudiantes;i++){
        cout<<"Ingrese la nota de los estudiantes: "<<endl;
        cin>> promedio[i];
    };

    for (int i=0;i<estudiantes;i++){
        total= total + promedio[i] ;
    };
    total= total/estudiantes;
    cout<<"El promedio es: "<< total<< endl;

    for (int i=0;i<estudiantes;i++){
        if (promedio[i]>total){
            cout<< "El estudiante "<< i+1 <<" tiene una nota mayor al promedio"<< endl;
            superiores+= 1;

        }
    }
    cout<<"Estudiantes mayores al promedio: "<< superiores;

    =========================================================================================

    cout << "Matriz: " << endl;
    int arreglo[2][2]={
        {1,3},
        {2,4},
    };
    cout << arreglo[1][1];

    ==========================================================================================
*/
    int valor=0;
    int mes=3;
    int sucursales=4;
    int sucu_mes=0;
    int total=0;
    int trimeste[sucursales][mes];

    for (int i=0;i<sucursales;i++ ){
        for(int j=0;j<mes;j++){
            cout<<"Ingrese el mes "<< j+1 <<" de la sucursal "<< i+1<<":"<<endl;
            cin>> valor;
            trimeste[i][j]= valor;
        }
        system("CLS");
    }
    for (int i=0;i<sucursales;i++){
        for(int j=0;j<mes;j++){

            sucu_mes+=trimeste[i][j];
            total+=trimeste[i][j];
        }
        cout<<"el total de ventas de la "<< i+1<<" Sucursal es: "<<sucu_mes<<endl;
        sucu_mes=0;

    }
    cout<<"El total de ventas de todas las sucursales es: "<< total;
        ;


    return 0;
}
