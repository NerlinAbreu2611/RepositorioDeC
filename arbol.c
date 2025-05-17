#include<stdlib.h>
#include<stdio.h>

typedef struct binaryTree tree;

struct binaryTree
{
    int var;
    tree * next;
    tree * back;
};



//Agregar datos al arbol

tree * raiz = NULL;


void agregar(int x){
    tree *new = malloc(sizeof(tree));
    new->var = x;

    if(raiz == NULL){
        raiz = new;
        new->back = NULL;
        new->next = NULL;
    }else{
        tree *iterator = raiz;
        tree *previus;

        while (iterator != NULL)
        {
            if(x >= iterator->var){
                previus = iterator;
                iterator = iterator->next;
                
            }else{
                previus  = iterator;
                iterator = iterator->back;
                
            }
        }

        if(x >= previus->var){
            previus->next = new;
            new->next = NULL;
            new->back =  NULL;
        }else{

           previus->back = new;
            new->next = NULL;
            new->back =  NULL;
        }
        
    }
}


void imprimir(tree *reco){

    if(reco != NULL){
       
        printf("[%i] ",reco->var);
        imprimir(reco->back);
        imprimir(reco->next);
    }else{
        
    }
    
}


void liberar(tree *reco){
    if(reco != NULL){
        liberar(reco->back);
        liberar(reco->next);
        free(reco);
    }
}

int main(){

    agregar(5);
    agregar(3);
    agregar(8);
    agregar(7);
    agregar(9);

    imprimir(raiz);
    liberar(raiz);
    

    return 0;
}