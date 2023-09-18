//Octavio Gentile C3 44898506
//Evaluacion 3er Parcial

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX 10

typedef struct TelemCar{
    char info;
    struct TelemCar *next;
    struct TelemCar *back;
}TelemCar;
TelemCar *sec, *aux;

void Crear(TelemCar *list );
void CrearNodo(TelemCar *list, char c);
void ConstruirLista(TelemCar *list);
int esMayuscula(char c);
char aMinuscula(char c);
int esVocal(char c);
void InformarVocales(TelemCar *prim);
void MostrarLista(TelemCar *prim);

void main(){
    Crear(sec);
    ConstruirLista(sec);
    MostrarLista(sec);
    InformarVocales(sec);
}

void Crear(TelemCar *list ){     //crear lista vacia
    list = NULL;
}

void CrearNodo(TelemCar *list, char c){
//lexico local
    TelemCar *a;
//inicio
    a = (TelemCar * ) malloc (sizeof(TelemCar));
    a->info = c;
    a->next = list;
    list = a;
}

void ConstruirLista(TelemCar *list){
//lexico local
    TelemCar *q;
    int longitud;
    char car;
//Inicio
    longitud = 0;
    q = list;
    while (longitud<MAX){
        printf("Ingrese un caracter: \n");
        scanf(" %c", &car );                                   
        CrearNodo(q, car);
        longitud = longitud+1;
    }
    list = q;
}

int esMayuscula(char c){
    if ((c>='A') && (c<='Z')){
        return 1;
    }else{
        return 0;
    }
}

char aMinuscula(char c){
    return (c + ('a'-'A'));                                           
}

int esVocal(char c){                                             //no se si hay error aqui o en la accion Informar Vocales, no logro que cuente las vocales.
//lexico local
    char minus;
//Inicio
    if(esMayuscula(c)){
        minus = aMinuscula(c);
    }else{
        minus = c;
    }
   return ((minus = 'a') || (minus = 'e') || (minus = 'i') || (minus = 'o') || (minus = 'u'));   
}

void InformarVocales(TelemCar *prim){
//lexico local
    TelemCar *a;
    int cant;
//Inicio
    cant = 0;
    a = prim;
    while(a!=NULL){
        if(esVocal(a->info)){
            cant  = cant + 1;
        }
        a = a->next;
    }
    printf("%d \n", cant);
}

void MostrarLista(TelemCar *prim){
//lexico local
    TelemCar *a;
    int i;
// inicio
    i = 0;
    a = prim;
    while(a!=NULL){
        printf("%c", a->info);
        a = a->next;
        i = i+1;
    }
    if (i=0){
        printf("Lista Vacia. \n");
    }
}
