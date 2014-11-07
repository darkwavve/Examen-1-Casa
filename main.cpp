#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
int opcion;
    cout<<"\tMenu"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"1.Jugar\n2.Salir"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"\nOpcion: ";
    cin>>opcion;

    switch(opcion){
    case 1:
    int cord_x;int cord_y;
    string arreglo[5][5] = { {"-","-","-","-","-"},{"-","-","-","-","-"},{"-","-","-","-","-"},{"-","-","-","-","-"},{"-","-","-","-","-"} };
    string resultado[5][5] = { {"O","O","O","O","O"},{"O","O","O","O","O"},{"O","O","O","O","O"},{"O","O","O","O","O"},{"O","O","O","O","O"}};
    string tmp1;string tmp2;
    int cont_dis = 0;
    int cont_nav = 5;
    int cont_fal = 0;
    int num_x;int num_y;

       for (int y = 0 ; y < 5; y++ )
        {
            num_x = rand() % 5;
            num_y = rand() % 5;
            resultado[num_x][num_y] = "X";
       }

    do{

     cout<<"\nIngrese las coordenadas\nX: ";
     cin>>cord_x;
     cout<<"Y: ";
     cin>>cord_y;

        arreglo[cord_x-1][cord_y-1] = resultado[cord_x-1][cord_y-1];

        for (int y = 0 ; y < 5; y++ )
        {
            cout<<"|";
            for(int x = 0 ; x < 5; x++ )
            {
            cout<<arreglo[x][y];
            cout<<"|";
            }
        cout<<" "<<endl;
        }
            if(resultado[cord_x-1][cord_y-1] == "X")
            {
            cout<<"Has Acertado el Disparo"<<endl;
            cont_nav--;
            }
            if(resultado[cord_x-1][cord_y-1] == "O")
            {
            cout<<"Has Fallado el Disparo"<<endl;
            cont_fal++;
            }



    }while(cont_fal != 5 || cont_nav == 0);

    if(cont_fal == 5)
        cout<<"Has Perdido";
    if(cont_nav == 0)
        cout<<"Has Ganado";
        break;


    }
    return 0;
}
