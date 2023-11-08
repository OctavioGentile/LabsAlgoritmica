//Octavio Gentile C3 Ej1-Parcialito

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
typedef struct{
  int a[MAX];
  int cant;
}TData;
TData datos;
int i, pos, num;
char msg[100];

void CrearDatos(TData d);
void Insercion(TData d);
void BuscarDico(TData d, int e, int *pos);

int main(){
  srand(time(NULL));
  
  printf("Ingrese la cantidad de elementos a cargar: ");
  scanf("%d", &datos.cant);
  CrearDatos(datos);
  
  for (i = 1; i <= datos.cant; i++){      
      printf("%d", datos.a[i]);
  }
  
  printf("Ingrese numero a buscar: ");
  scanf("%d", &num);
  
  Insercion(datos);

  for (i = 1; i <= datos.cant; i++){     

      printf("%d \n", datos.a[i]);
  }

  BuscarDico(datos, num, &pos);          

  printf("La posicion del numero buscado es: (-1 sino está): ");
  printf("%d ", pos);                          
  
  return 1;
}

void CrearDatos(TData d){
  int i;

  for (i = 1; i <= d.cant; i++){
    d.a[i] = rand() % (100 - 1) + 1;              ////////////////////////////////////
  }
}
  
void Insercion(TData d){
  int aux, i, j;
  
  i = 2;
  while(i <= d.cant){
    aux = d.a[i];
    j = i - 1;     
    while(j > 0 && d.a[j] > aux){
      d.a[j+1] = d.a[j];      
      j = j - 1;
    }
    d.a[j+1] = aux;
    i = i+1;
  }
}
 
void BuscarDico(TData d, int e, int *pos){
  
  int k, inf, sup;
  
  if (e < d.a[1] || e > d.a[d.cant]){
    *pos = 1;
  }else{
    if(e > d.a[1] && e <= d.a[d.cant]){
     inf = 1;
     sup = d.cant;
     while (inf < sup){
       k = (inf + sup)/2;
        if (e > d.a[k]){
          inf = k + 1;
        }else{
          if(e <= d.a[k]){
            sup = k;
          }
        }
     }
     if(d.a[inf] == e){
        *pos = inf;
     }else{
       if(d.a[inf] != e){
          *pos = -1;
       }
      }
    }
  }                          
}
