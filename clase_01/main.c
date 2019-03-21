#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3


int sumar(int numero1,int numero2);
int pedirSumarMostrar();
int pedirAcumularMostrar();



int main()
{
    /*if(!pedirSumarMostrar())
    {

        printf("\nEl resultado finalizo con exito.\n");
    }*/
    pedirAcumularMostrar();

    return 0;
}


int sumar(int numero1,int numero2){
    int suma;
    suma = numero1 + numero2;

    return suma;
}

int pedirSumarMostrar()
{
    int primerNumero;
    int segundoNumero;
    int resultado;

    printf("Ingrese Numero 1: \n");
    scanf("%d",&primerNumero);
    printf("Ingrese Numero 2: \n");
    scanf("%d",&segundoNumero);
    resultado = sumar(primerNumero,segundoNumero);
    printf("\n\tLa suma de los numeros elegidos es: %d\n",resultado);


    return 0;
}

int pedirAcumularMostrar()
{
    int buffer;
    int acumulado=0;
    float resultado;
    int i;

    for(i=0;i<CANTIDAD_REP;i++)
    {
        printf("Ingrese numero: %d ",i + 1);
        scanf("%d",&buffer);
        //falta validar
        acumulado += buffer;

    }
    resultado = acumulado/CANTIDAD_REP;
    printf("El resultado es: %.f",resultado);

    return 0;
}


