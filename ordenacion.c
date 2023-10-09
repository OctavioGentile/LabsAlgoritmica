//Octavio Gentile C3 44898506
//Algoritmo Burbuja
#include <stdio.h>
#include <stdlib.h>
#define Max 100

typedef struct {
    int a[Max];
    int cant;
}TData;

TData datos;
int i;

void InicializacionR (TData d);
void Burbuja (TData d);

void main(){
    printf("ingrese la cantidad de elementos a cargar:");
    scanf("%d", datos.cant);
    InicializarR(datos);
    i = 1;
    while (i <= datos.cant){
        printf(datos.a[i]);
        i++;
    }
    Burbuja(datos);
    for (i = 1, i <= datos.cant, i++){
        printf(datos.a[i]);
    }
}

void InicializacionR (TData d){
   int i;
   i = 1;
   while (i <= d.cant){
        d.a[i] = random(1,100);
        i++;
   } 
}

void Burbuja (Tdata d){
    int i;
    i = Max;
    while (i>1){
        j = 1;
        while(j<1){
            if(d.a[j] > d.a[j+1]){
                temp = d.a[j];
                d.a[j] = d.a[j+1];
                d.a[j+1] = temp;
            }
            j++;
        }
        i--;
    }
}


