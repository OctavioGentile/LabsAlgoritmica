//Octavio Gentile - Comision 3 - 44898506
//Implementacion Ejercicio 1  Practica 9
#include <stdio.h>
#include <string.h>
//Lexico
#define MAX 150
typedef struct{
              char ape[25];
              int dni;
              }TPersona;
typedef struct{
              TPersona arr[MAX];
              int cant[MAX];
              }TData;
TData data;
int documento;

void cargar(TData *a);
void nombreDoc(TData com, int doc);

//INICIO
void main(){
    cargar(&data);
    printf("Ingrese DNI a buscar");
    scanf("%d", &documento); 
    nombreDoc(data, documento);
}
//FIN

//ACCIONES
void cargar(TData *a){
    //Lexico Local
    int c;
    //inicio
    printf("Ingrese la cantidad de personas que llevara el arreglo: \n");
    scanf("%d",&c);
    if(c<150){
    for (int i=0; i<c;i++){
         printf("Ingrese una persona: \n");
         printf("Ingrese el Apellido: ");
         scanf("%s", a->arr[i].ape);
         printf("Ingrese DNI: ");
         scanf("%d", &a->arr[i].dni);
    }
    }else{
        printf("No es un numero valido. \n");
    }
}
void nombreDoc(TData com, int doc){
    //Lexico Local
    int i;
    char msje[25];
    int dniEncontrado;
    //inicio
    dniEncontrado=0;
    i=1;
    while(i<com->cant || dniEncontrado==0){
        if(com->arr[i].dni == doc){
            msje=com->arr[i].ape;
            printf("%s",msje);
            dniEncontrado=1;
        }
        i++;
    }
    if(dniEncontrado=!1){
        printf("No se encontro ninguna persona con ese DNI");
    }
}
