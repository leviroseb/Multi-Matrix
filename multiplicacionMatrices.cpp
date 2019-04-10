#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

void crear_matriz(int [][10], int, int);
void mostrar_matriz(int [][10],int , int);
void multiplicar(int [][10], int [][10], int [][10], int, int, int, int);

int main()
{
    int M[10][10], N[10][10],g,d,f,c,V[10][10];
    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>f;
    cout<<"Ingrese el numero de columnas de su matriz: ";
    cin>>c;
    crear_matriz(M,f,c);
    mostrar_matriz(M,f,c);
    cout<<"Ingrese el numero de filas de la segunda matriz: ";
    cin>>g;
    cout<<"Ingrese el numero de columnas de la segunda matriz: ";
    cin>>d;
    crear_matriz(N,g,d);
    mostrar_matriz(N,g,d);
    if(c==g)
    {
        multiplicar(V,M,N,f,c,g,d);
        mostrar_matriz(V,f,d);
    }
    else
    {
        cout<<"No se pueden multiplicar las matrices dadas....El numero de filas de la matriz 1 tiene que coincidir con el numero de columnas de la matriz 2.....";
    }


    return 0;
}


void crear_matriz(int M[][10], int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for (int j=0;j<c;j++)
        {
            cout<<"Ingrese un elemento de la matriz: ";
            cin>>M[i][j];
        }
    }
}


void mostrar_matriz(int M[][10], int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for (int j=0;j<c;j++)
        {
            cout<<M[i][j];
        }

        cout<<endl;
    }
}




void multiplicar(int V[][10], int M[][10], int N[][10], int f, int c,  int g, int d)
{
     for(int i=0;i<f;i++)
     {
        for(int j=0;j<d;j++)
        {
            V[i][j]=0;
            for(int k=0;k<c;k++)
            {
                V[i][j]+=M[i][k]*N[k][j];

            }

           
        }
     }
}


