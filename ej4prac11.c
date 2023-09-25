//Octavio Gentile   c3   44898506
//EJ4TP11

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *f;
char c;
char x;
char msj[50];
int iguales, distintos;

void CargarArchivo(char nomExt[]);

//Inicio
int main(){
    CargarArchivo("secu.txt");
    iguales = 0;
    distintos = 0;

    scanf("%c", &c);
    f = fopen("secu.txt", "r");
    while (!(feof(f))){           
        fread(&x, sizeof(x),1,f);
        if(c==x){
            iguales = iguales + 1;
        }else{
            distintos = distintos + 1;
        }
    }
    fclose(f);
    printf("%d", iguales);
    printf("%d", distintos);
    return 0;
}
void CargarArchivo(char nomExt[]){
//lexico local    
    char x;
    FILE *f;
    char msj[30];
//inicio
    strcpy(msj, "Ingrese un caracter o *");
    f = fopen(nomExt, "w");
    //printf("%s",msj);                            esta de mas
    //scanf("%c", &x);                            esta de mas
    while (x != '*'){                    
        fputc(x, f);
        printf("%s",msj);
        scanf("%c", &x);
    }
    fclose(f);
}//faccion
