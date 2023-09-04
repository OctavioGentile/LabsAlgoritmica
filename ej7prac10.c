//Octavio Gentile 44898506 C3
//Ejercicio 7 practico 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
    char info[10];
    struct nodo * next;
    struct nodo * back;
} TNodo;

TNodo *q, *p, *r, *s, *t;

void MostrarLista(TNodo * list);

int main () {

    p = (TNodo * ) malloc (sizeof(TNodo));          //ultimo nodo por p
    strcpy(p -> info, "va?");
    p -> next = NULL;
    p -> back = NULL;

    t = (TNodo * ) malloc (sizeof(TNodo));    
    p -> back = t;
    strcpy(t -> info, "te");
    t -> next = p;

    s = (TNodo * ) malloc (sizeof(TNodo));
    t -> back = t;    
    strcpy(s -> info, "cómo");
    s -> next = t;

    r = (TNodo * ) malloc (sizeof(TNodo));          //primer nodo por r
    s -> back = s;
    strcpy(r -> info, "Hola,");
    r -> next = s;
    r -> back = NULL;

    MostrarLista(r);

    q = (TNodo * ) malloc (sizeof(TNodo));
    strcpy(q -> info, "Tito,");
    q-> next = s;                                 //coloco q
    q-> back = r;
    r-> next = q;                                     
    t-> back = q;
    
    free (p);                   //
    p = t;                      //elimino "va?"
    t-> next = NULL;            //
    
    strcpy(t -> info, "estás?");
    
    MostrarLista(r);
    
    return 0;
}

void MostrarLista (TNodo * list) {
//lex local
    TNodo *aux;
//inicio
    aux = list;
    while(aux != NULL) {
        printf("%s ",aux -> info);
        aux = aux -> next;
    }
    printf("\n");
};
