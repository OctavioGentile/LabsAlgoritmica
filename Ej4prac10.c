//Octavio Gentile C3 - 44898506
//ej1prac10
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
typedef struct Tpers{
    char nom[20];
    char ape[20];
    int dni;
    int edad;
}Tpers;
typedef struct Telem{
    Tpers info;
    struct nodo * next;
}Telem;
Telem *q;

void crear(Telem *list);
void insertarCab(Tpers reg, Telem *list);
int vacia(Telem **list);
void suprimirCab(Telem *list);
void listar(Telem **list);

int opcion;
char msj[100];


int main (){
  scanf("");
  crear(q);
}

void crear(Telem *list){
  list = NULL;
}

void insertarCab(Tpers reg, Telem *list){
Telem *aux;
  
  aux = (Telem * ) malloc (sizeof (Telem));
  aux->info = reg;
  aux->next = list;
  list = aux;
}

int vacia(Telem **list){
  if(list=NULL){
    return 1;
  }else{
    return 0;
  }
}

void suprimirCab(Telem *list){
Telem *aux;

  if(vacia(list)==1){
    aux = list;
    list = list->next;
    free(aux);
  }
}

void listar(Telem **list){
  while(list<>NULL){
    printf("%s \n", list->info.nom);
    printf("%s \n", list->info.ape);
    printf("%d \n", list->info.dni);
    printf("%d \n", list->info.edad);
    list = list->next;
  }
}
