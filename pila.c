//Crear pila

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo pila;

struct nodo {
    int valor;
    pila *sig;
};

pila *raiz = NULL;

void probarEnlance(){
 printf("El repositorio se enlaza excelente");
}

void agregar(int x){
  
    pila *nuevo = malloc(sizeof(pila));

    nuevo->valor = x;

    if(raiz == NULL){
        nuevo->sig = NULL;
        raiz = nuevo;
    }else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}


int sacar(){

    int dato;
    pila *borrar = raiz;

    dato = borrar->valor;
    raiz = raiz->sig;
    free(borrar);
    return dato;
}


int estaVacio(){

    if(raiz == NULL){
        return 1; //El cero representa la fila llena
    }else{
        return 0; //Representa fila vacio
    }
}

void imprimir(){
    
    printf("\nImpresion de pila:\n");
    
    while (raiz != NULL)
    {
       printf("[%i]->",sacar());
    }
printf("\n");
     if(estaVacio()){

        printf("La pila esta vacia");

    }else{
        printf("La pila esta llena");
    }


}

int main()
{
    if(estaVacio()){

        printf("La pila esta vacia");

    }else{
        printf("La pila esta llena");
    }

    agregar(5);
    agregar(6);
    agregar(10);
    agregar(15);
    agregar(1);
    printf("\n");

     if(estaVacio()){

        printf("La pila esta vacia");

    }else{
        printf("La pila esta llena");
    }

    imprimir();



    return 0;
}
