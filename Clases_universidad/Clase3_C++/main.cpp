#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;


int main()
{
   /* Sistema Switch

    float num1=0;
    float num2=0;
    int opcion=0;
    float total=0;
    cout << "Ingrese el numero 1: ";
    cin>>num1;
    cout<<"Ingrese el numero 2: ";
    cin>>num2;
    cout<<"Seleccione alguna opcion si:  1 Suma;  2 resta ; 3 Multiplicacion; 4 Division; 5 Raiz cuadrada: "<< endl;
    cin>>opcion;

    switch(opcion){
case 1 :
    total=num1+num2;
    cout<<"La suma es: "<< total;
    break;
case 2 :
    total=num1-num2;
    cout<<"La resta es: "<< total;
    break;
case 3 :
    total=num1*num2;
    cout<<"la multiplicacion es: "<<total;
    break;
case 4 :
    if (num2== 0){
        cout<<"Division indeterminada";
        break;
    }
    else{
        total= num1 /num2;
        cout<<"La division es: "<<total;
        break;
    }
case 5 :
    total= sqrt(num1);
    cout<<"La raiz cuadrada del 1 numero es:"<<total;
    total=sqrt(num2);
    cout<<"La raiz cuadrada del 2 numero es:" <<total;
    }
*/
/*   Sistema While
    float media=0;
    float suma=0;
    float acum=0;
    int i=0;
    while(i<6){

    cout<<"ingrese numero a sumar"<<endl;
    cin>>suma;
    acum+=suma;
    i++;
    }
    media = acum/i;
    cout<<"El promedio es: "<< media;

    system("PAUSE");
    system("CLS");
*/
/*
    int i=0;
    for(;;i++){
        cout<<"El numero de la iteracion es:"<<i<< endl;
        sleep(1);
        if (i==10){
            i= 0;
            system("PAUSE");
            system("CLS");
        }
        */

        int m=0;
        int n=0;
        char c;

        cout<<"Ingrese la cantidad de filas: ";
        cin>>m;
        cout<<"Ingrese la cantidad de columnas: ";
        cin>>n;
        cout<<"Ingrese un character: ";
        cin>>c;

        for(int i=0;i<m;i++){
            for(int j=0; j<n;j++){
                cout<<c;
            }
            cout<<endl;
        }



    return 0;
    }


