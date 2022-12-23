/*
Programa: Opcional parcial 1
Programadores: Carlos Stiven Ruiz Rojas (2259629)
Correo: carlos.stiven.ruiz@correounivalle.edu.co
Descripcion:
Version: 1.0
Fecha de creacion: 10/10/22
Fecha de ultima modificacion: 10/10/22
*/



#include <iostream>

using namespace std;

const int piso=4, habitaciones=4;
int n=0,k=0,recaudo=0,c=0;

int hotel[piso][habitaciones];


void hotel_vacio(int hotel[piso][habitaciones]);
void imprimir_tabla(int hotel[piso][habitaciones]);
void asignar(int hotel[piso][habitaciones]);
void consultar(int hotel[piso][habitaciones]);
void desasignar(int hotel[piso][habitaciones]);
void recaudo_t(int recaudo);


int main()
{
    int n=0;
    hotel_vacio(hotel);
    do
    {
        system("CLS");
        imprimir_tabla(hotel);
        cout << "Que deseas hacer: " <<endl;
        cout << "1. Asignar habitacion"<< endl << "2. Consultar asignacion" << endl << "3. Desasignar habitacion"<< endl <<"4. Consultar recaudo"<< endl <<"5. Finalizar programa"<< endl<< "Responde:";
        cin >> n;
        switch (n)
        {
        case 1:
            asignar(hotel);
            break;
        case 2:
            consultar(hotel);
            break;
        case 3:
            desasignar(hotel);
            break;
        case 4:
            recaudo_t(recaudo);
            break;
        default:
            break;
        }

    }
    while (n !=5);
    return 0;
}

void hotel_vacio(int hotel[piso][habitaciones])
{
    for (int i=0; i<piso; i++)
    {
        for (int j=0; j<habitaciones; j++)
        {
            hotel[i][j]= -1;
        }
    }
}
void imprimir_tabla(int hotel[piso][habitaciones])
{
    string tipo_h[4]= {"piso 4","piso 3","piso 2","piso 1"};
    string disponible[piso][habitaciones];
    for (int i=0; i<piso; i++)
    {
        for (int j=0; j<habitaciones; j++)
        {
            if (hotel[i][j]!=-1)
            {
                disponible[i][j]="O";
            }
            else
                disponible[i][j]="D";
        }
    }

    cout << "         1 " << " 2 " << " 3 " << " 4 " << endl;
    for(int i=0; i<piso; i++)
    {
        cout << tipo_h[i]<< "   ";
        for(int j=0; j<habitaciones; j++)
        {

            cout << disponible[i][j]<<"  ";
        }
        cout<<endl;
    }

}
void asignar(int hotel[piso][habitaciones])
{
    int cedula=0, p=0,h=0;
    cout <<"Ingrese su cedula: ";
    cin>> cedula;

    cout<<"En que piso deseas la habitacion: "<< endl;
    cin >> p;

    cout<<"Que habitacion deseas: " << endl;
    cin >> h;
    if (p==1)
    {
        if (h==1)
        {
            if (hotel[3][0]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=32000;
                hotel[3][0]=cedula;
            }
        }
        else if(h==2)
        {
            if (hotel[3][1]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=32000;
                hotel[3][1]=cedula;
            }
        }
        else if(h==3)
        {
            if (hotel[3][2]!=-1)
            {
                recaudo+=32000;
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                hotel[3][2]=cedula;
            }
        }
        else if(h==4)
        {
            if (hotel[3][3]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=32000;
                hotel[3][3]=cedula;
            }
        }
    }
    else if (p==2)
    {

        if (h==1)
        {
            if (hotel[2][0]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=43000;
                hotel[2][0]=cedula;
            }
        }
        else if(h==2)
        {
            if (hotel[2][1]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=43000;
                hotel[2][1]=cedula;
            }
        }
        else if(h==3)
        {
            if (hotel[2][2]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=43000;
                hotel[2][2]=cedula;
            }
        }
        else if(h==4)
        {
            if (hotel[2][3]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=43000;
                hotel[2][3]=cedula;
            }
        }
    }
    else if (p==3)
    {

        if (h==1)
        {
            if (hotel[1][0]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=52000;
                hotel[1][0]=cedula;
            }
        }
        else if(h==2)
        {
            if (hotel[1][1]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=52000;
                hotel[1][1]=cedula;
            }
        }
        else if(h==3)
        {
            if (hotel[1][2]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=52000;
                hotel[1][2]=cedula;
            }
        }
        else if(h==4)
        {
            if (hotel[1][3]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=52000;
                hotel[1][3]=cedula;
            }
        }
    }
    else if (p==4)
    {

        if (h==1)
        {
            if (hotel[0][0]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=65000;
                hotel[0][0]=cedula;
            }
        }
        else if(h==2)
        {
            if (hotel[0][1]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=65000;
                hotel[0][1]=cedula;
            }
        }
        else if(h==3)
        {
            if (hotel[0][2]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=65000;
                hotel[0][2]=cedula;
            }
        }
        else if(h==4)
        {
            if (hotel[0][3]!=-1)
            {
                cout << "Habitacion ocupada"<<endl;
                system("PAUSE");
            }
            else
            {
                recaudo+=65000;
                hotel[0][3]=cedula;
            }
        }
    }
}
void consultar(int hotel[piso][habitaciones])
{
    int m=0,k=0;
    cout<< "Ingrese su cedula a revisar" << endl;
    cin>> m;
    for (int i=0; i<piso ; i++)
    {
        for(int j=0; j<habitaciones; j++)
        {
            if (m==hotel[i][j])

            {
                if (i==3)
                {
                    k=1;
                }
                else if (i==2)
                {
                    k=2;
                }
                else if (i==1)
                {
                    k=3;
                }
                else if (i==0)
                {
                    k=4;
                }
                cout<<"Usted se encuentra en el piso "<< k << " Y habitacion "<< j+1<< endl;
                system("PAUSE");
            }

        }

    }
}
void desasignar(int hotel[piso][habitaciones])
{
    int c=0;
    int m=0;
    cout<< "Ingrese su cedula a para desasignar" << endl;
    cin>> m;
    for (int i=0; i<piso ; i++)
    {
        for(int j=0; j<habitaciones; j++)
        {
            if (m==hotel[i][j])
            {
                hotel[i][j]= -1;
                if (i==0){
                    c=65000;
                    cout<<"Total a pagar es:"<< c <<endl;
                    system("PAUSE");
                }
                else if (i==1){
                    c=52000;

                    cout<<"Total a pagar es:"<< c <<endl;
                    system("PAUSE");
                }
                else if (i==2){
                    c=43000;
                    cout<<"Total a pagar es:"<< c <<endl;
                    system("PAUSE");
                }
                else if (i==3){
                    c=32000;
                    cout<<"Total a pagar es:"<< c <<endl;
                    system("PAUSE");
                }
            }

        }
    }

}
void recaudo_t(int recaudo){
    cout<<"Total recaudado en el dia fue: "<<recaudo<<endl;
    system("PAUSE");
}

