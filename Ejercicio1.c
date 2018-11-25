#include<stdio.h>
#include<stdlib.h>


struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(int x){
    
    struct nodo *nuevo;
    nuevo = malloc(sizeof (struct nodo));
    nuevo->info = x;
    
    if (raiz == NULL) {
        raiz=nuevo;
        nuevo->sig=NULL;
    }else
    {
        nuevo->sig = raiz;
        raiz=nuevo;
        
    }   
    
}
void imprimir(){
    int contarNodos=0; //decalaramos una variable de tipo entero, para usarla como contador
    struct nodo *reco=raiz;
    printf("Lista Completa. \n");
    
    while(reco!=NULL){
        printf("%i ", reco->info);
        contarNodos++;//mientras el bucle siga, aumentamos en uno el contador
        reco=reco->sig;
        
    }
    printf("\n");
    printf("\nLa cantidad de nodos es: %d\n\n", contarNodos);//se imprime la cantidad de nodos
}
int extraer(){
    if(raiz != NULL){
        int informacion = raiz->info;
        struct nodo *bor =raiz;
        raiz=raiz->sig;
        free(bor);
        return informacion;
    }
    else{
        return -1;
    }

}
void liberar(){
    
    struct nodo *reco = raiz;
    struct nodo *bor;
    while(reco != NULL){
        bor =reco;
        reco = reco->sig;
        free(bor);
    }
    
}
int main(void){
  insertar(10);
  insertar(40);
  insertar(3);
  imprimir();
  printf("extraemos de la pila:%i\n", extraer());
  imprimir();
  liberar();
}
