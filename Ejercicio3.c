#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz = NULL;

void insertar(int dato){
    
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo ->info= dato;
    if(raiz == NULL){
        raiz = nuevo;
        nuevo ->sig = NULL;
    }else{
        nuevo ->sig = raiz;
        raiz = nuevo;
    }

}

void reemplazar(struct nodo *pila, int viejo, int nuevo ){
    
    if(pila != NULL){
        while(pila!=NULL){
        if(pila->info == viejo){
            pila->info = nuevo;
        }
        pila = pila->sig;
        }
    }else{
        printf("No se encontro coincidencia con la pila\n");
    }

}

void imprimir(){
    struct nodo *reco = raiz;
    printf("Lista completa.\n");
    while(reco!=NULL){
        printf("%i",reco->info);
        reco = reco->sig;
        printf("\n");
    }
    printf("\n");
}

int main() {
    
    
    
    insertar(10);
    insertar(20);
    insertar(20);
    insertar(20);
    insertar(20);
    
    int viejo;
    int nuevo;
    
    printf("Ingrese el numero viejo\n");
    scanf("%d",&viejo);
    printf("Ingrese el numero nuevo\n");
    scanf("%d",&nuevo);
    
    printf("Pila sin cambiar numeros\n");
    imprimir();
    reemplazar(raiz, viejo, nuevo);
    printf("Pila con los numeros nuevos\n");
    imprimir();
    
    
    return 0;
}
