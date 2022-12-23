#include <iostream>

using namespace std;

int main(){


    float nota;
    cout<< "Ingrese su nota: ";
    cin >> nota;
    if(0.0 >= nota && nota< 5.0){
        cout<< "Suspenso";
    }else if(5.0>=nota && nota<=6.5){
        cout<<"Aprobado";
    }else if(6.5<nota && nota<=8.5){
        cout<<"notable";
    }else if(8.5<nota && nota< 10){
        cout<<"sobresaliente";
    }else if(nota== 10){
        cout<<"Matricula de honor";
    }

    return 0;
}
