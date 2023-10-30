//Octavio Gentile C3 44898506

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *f;
char elementoActual, elementoDado;
int i, iguales, distintos;

void CargarArchivo(FILE *(*g));

int main(){
    CargarArchivo(&f);
    f=open("secu.txt","r");
    iguales = 0;
    distintos = 0;
    printf("Ingrese el Caracter a buscar cuantos iguales y distintos hay: ");
    scanf("%c", &elementoDado);
    while(!feof(f)){
        elementoActual = fgetc(f);
        if(elementoActual == elementoDado){
            iguales = iguales + 1;
        }else{
            distintos = distintos + 1;
        }
    }
    fclose(f);
    printf("Cantidad de elementos iguales: ");
    printf("%d", iguales);
    printf("Cantidad de elementos distintos: ");
    printf("%d", distintos);
}

void CargarArchivo(FILE *(*g)){
    char msj [50];
    int cantidadElementos;
    char elem;
    g = open("secu.txt", "w");
    printf("Ingrese cuantos elementosdesea cargar en el archivo");
    scanf("%d", &cantidadElementos);
    for(i = 1 ; i <= cantidadElementos; i++){
        printf("Ingrese un elemento: ");
        scanf("%c", &elem);
        fputc(elem, g);
    }
    feof(g);
}