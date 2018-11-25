#include <stdlib.h>
#include <stdio.h>

typedef struct nodo
{
    int dato;
    struct nodo *siguiente;
} nodo;

nodo *primero = NULL;

void insertarMostrarOrden(){
    
}
int main(void){
    
int tamanio;
    printf("\nCuantos Digitos ingresará?:\n");
    scanf("%d", &tamanio);
    int vector[tamanio];

    
    
    for(int i = 0; i <tamanio; i++){
    nodo *nuevo = (nodo *)malloc(sizeof(nodo));
    printf("Ingrese el dígito #%d:\n", i+1);
    scanf("%d", &nuevo->dato);
    vector[i]=nuevo->dato;
    nuevo->siguiente = primero;
    primero = nuevo;
    
    }

    printf("\nLos dígitos en orden son:\n");
    
    for(int i = 0; i < tamanio; i++){
        printf("%d\t", vector[i]);
    }   

    desplegarPila();

}


void desplegarPila(){
    struct nodo *actual=primero;

        printf("\nLos dígitos invertidos atravez de la pila es:\n");
        while (actual != NULL)
        {
            printf("%d\t", actual->dato);
            actual = actual->siguiente;
            
        }
        printf("\n");
    

}
