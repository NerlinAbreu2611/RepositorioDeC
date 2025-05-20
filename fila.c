#include<stdio.h>
#include<stdlib.h>

typedef struct Filas Fila;

struct Filas{

    int val;
    Fila *sig;
};


Fila *primero = NULL;
Fila *ultimo = NULL;



void agregar(int x){

    Fila *nuevo = malloc(sizeof(Fila));
    nuevo->val = x;

    if(primero == NULL){
        primero = nuevo;
        ultimo = nuevo;
        
    }else{
        ultimo->sig = nuevo;
        ultimo = nuevo;
        nuevo->sig = NULL;
    }

}


int consumir(){

    if(primero != NULL){
    Fila * borrar = primero;
    int val = primero->val;
    primero = primero->sig;
    free(borrar);
    return val;
    }else{

    ultimo = NULL;
    return -1; //error


    }
    
   
}




int main(){


    agregar(5);
    agregar(6);
    agregar(7);
    agregar(8);

    printf("Impresion:");
    while (primero!= NULL)
    {
        printf("%i ",consumir());
        
    }
    
    agregar(7);
    agregar(15);
    agregar(20);
    agregar(8);
    printf("\n");
     printf("Impresion:");
    while (primero!= NULL)
    {
        printf("%i ",consumir());
        
    }


    return  0;
}





