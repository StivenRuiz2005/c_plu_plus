/*
Programa: Parcial 1
Programadores: Carlos Stiven Ruiz Rojas (2259629)
Correo: carlos.stiven.ruiz@correounivalle.edu.co
Descripcion: Apoyo economico de consumo
Version: 1.0
Fecha de creacion: 26/09/2022
Fecha de ultima modificacion: 26/09/2022
*/

#include <iostream>

using namespace std;

const int ciudades=4,ciudades2=4;

float datos[ciudades2][ciudades];
float total[ciudades2][ciudades];


void ingreso_datos(float datos[ciudades2][ciudades]);
void visualizacion_datos(float datos[ciudades2][ciudades]);
void subsidio(float datos[ciudades2][ciudades], float total[ciudades2][ciudades]);
void v_subsidio(float total[ciudades2][ciudades]);
void v_total(float total[ciudades2][ciudades]);
void bog_med(float total [ciudades2][ciudades]);

int main()
{
    ingreso_datos(datos);
    visualizacion_datos(datos);
    subsidio(datos,total);
    v_subsidio(total);
    v_total(total);
    bog_med(total);
    return 0;
}


void ingreso_datos(float datos[ciudades2][ciudades]) //Ingreso de Datos
{
    string nombre[4]= {"Bogota","Cali","Medellin","Barranquila"};
    int km=0;
    // Ingreso de Datos
    for(int i=0; i<ciudades; i++)
    {
        cout << "Km desde: " << nombre[i] << "" << endl;
        for(int j=0; j<ciudades2; j++)
        {
            switch(j)
            {
            case 0:
                cout << "  Hasta Bogota: ";
                cin >> km;
                datos[i][j]=km;
                break;
            case 1:
                cout << "  Hasta cali: ";
                cin >> km;
                datos[i][j]=km;
                break;
            case 2:
                cout << "  Hasta medellin: ";
                cin >> km;
                datos[i][j]=km;
                break;
            case 3:
                cout << "  Hasta barranquilla: ";
                cin >> km;
                datos[i][j]=km;
                break;

            default:
                cout << "Ciudad invalida" << endl;
                break;
            }

        }
        system("CLS");
        cout << endl;
    }
}

void visualizacion_datos(float [ciudades2][ciudades])// Visualizar primera tabla
{
    // visualizar datos
    string nombre[4]= {"Bogota","Cali","Medellin","Barranquila"};
    cout << "                 Bogota " << "Cali" <<   " Medellin" <<  " Barranquilla"<< endl;
    for(int i=0; i<ciudades2; i++)
    {
        cout << nombre[i] << "               " ;
        for(int j=0; j<ciudades; j++)
        {
            cout << datos[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    system("CLS");
}

void subsidio(float datos[ciudades2][ciudades],float total[ciudades2][ciudades]) //calcular subsidio
{
    for (int i=0; i<ciudades2; i++)
    {
        for (int j=0; j<ciudades; j++)
        {
            if ((datos[i][j]>=0)&&(datos[i][j]<10))
                total[i][j]=15000;
            else if ((datos[i][j]>=10)&&(datos[i][j]<20))
                total[i][j]=25000;
            else if (datos[i][j]>=20)
                total[i][j]=35000;
        }
    }
}

void v_subsidio(float total[ciudades2][ciudades]) //Visualizar Tabla con subsidio calculado
{

    // visualizar datos
    string nombre[4]= {"Bogota","Cali","Medellin","Barranquila"};
    cout << "        Bogota " <<    "Cali" <<    " Medellin " <<   "Barranquilla"<< endl;
    for(int i=0; i<ciudades2; i++)
    {
        cout << nombre[i] << " : " ;
        for(int j=0; j<ciudades; j++)
        {
            cout << total[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void v_total(float total[ciudades2][ciudades]) //Valor total de todos los subsidios
{
    int t=0;
    for (int i=0; i<ciudades2; i++)
    {
        for(int j=0; j<ciudades; j++)
        {
            t+=total[i][j];
        }

    }
    cout<<"El total de subsidio es: "<< t<<endl;

}

void bog_med(float total[ciudades2][ciudades])
{
    int bm_horizontal=0;
    int bm_vertical=0;
    for (int i=0; i<3; i++)
    {
        bm_horizontal+= total[0][i];
        bm_vertical+=total[i][0];
        i++;
    }
    cout<<"La suma en forma horizontal de Bogota y Medellin es: "<<bm_horizontal<<endl;
    cout<<"La suma en forma vertical de Bogota y Medellin es: "<<bm_vertical<<endl;
}
