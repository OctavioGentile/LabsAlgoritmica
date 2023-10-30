//Octavio Gentile C3 44898506

#include <stdio.h>
#include <string.h>

FILE *f;
char elementoActual, elementoDado;
int i, iguales, distintos;

void CargarArchivo(FILE *(*g));

void main(){
    CargarArchivo(&f);
    f = fopen("secu.txt","r");
    printf("Ingrese el Caracter a buscar cuantos iguales y distintos hay: \n");
    scanf("%c", &elementoDado);
    getchar();
    iguales = 0;
    distintos = 0;
    while(!feof(f)){
        elementoActual = fgetc(f);
       // printf("elemActual %c \n", elementoActual);
        if(elementoActual == elementoDado){
            iguales = iguales + 1;
        }else{
            distintos = distintos + 1;
        }
    }
    fclose(f);
    printf("\nCantidad de elementos iguales: ");
    printf("%d", iguales);
    printf("\nCantidad de elementos distintos: ");
    printf("%d", distintos);
}

void CargarArchivo(FILE *(*g)){
    char msj [150];
    int cantidadElementos;
    char elem;
    *g = fopen("secu.txt", "w");
    printf("Ingrese cuantos elementos desea cargar en el archivo: ");
    scanf("%d", &cantidadElementos);
    getchar();
    for(i = 0 ; i < cantidadElementos; i++){
        printf("Ingrese un elemento: ");
        scanf("%c", &elem);
        getchar();
        fputc(elem, *g);
    }
    feof(*g);
}