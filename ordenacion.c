//Octavio Gentile C3 44898506
//Algoritmo Burbuja
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 100

typedef struct {
    int a[Max];
    int cant;
}TData;

TData datos;
int i;

void InicializacionR (TData *d);
void Burbuja (TData *d);

void main(){
    srand (time(NULL));
    printf("ingrese la cantidad de elementos a cargar:");
    scanf("%d", &datos.cant);
    InicializacionR(&datos);
    i = 1;
    while (i <= datos.cant){
        printf("%d\n", datos.a[i]);
        i++;
    }
    Burbuja(&datos);
    for (i = 1; i <= datos.cant; i++) {
        printf("%d\n", datos.a[i]);
    }
}

void InicializacionR (TData *d){
   int i;
   i = 1;
   while (i <= d->cant){
        d->a[i] = rand () %100 + 1;
        i++;
   } 
}

void Burbuja (TData *d){
    int i, j, temp;
    i = d->cant;
    while (i>1){
        j = 1;
        while(j<i){
            if(d->a[j] > d->a[j+1]){
                temp = d->a[j];
                d->a[j] = d->a[j+1];
                d->a[j+1] = temp;
            }
            j++;
        }
        i--;
    }
}