#include<stdio.h>
#include<string.h>
#include "mate.h"
//Comillas para librerias propias


struct producto
{
    int cod;
    char nombre[40];
    double precio;
};




int main()
{
    printf("Digita los datos del producto:\n");
    struct producto p;

    printf("Cod:");
    scanf("%i",&p.cod);
    fflush(stdin);
    printf("Nom:");
    fgets(p.nombre,sizeof(p.nombre),stdin);
    p.nombre[strcspn(p.nombre,"\n")] = '\0';
    printf("precio:");
    scanf("%lf",&p.precio);

    printf("Impresion:\nCod: %i Nom:%s Pre:%.2lf",p.cod,p.nombre,p.precio);


    printf("\nLa suma de 4 + 5 es %i",suma(4,5));

    return 0;
}
