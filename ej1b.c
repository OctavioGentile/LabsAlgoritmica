//Octavio Gentile 44898506 c3
//SUMATORIA
#include <stdio.h>
#include <string.h>

int num;

int ProductoriaAumento(int n);

int main(){
    printf("Ingrese un valor para ver la productoria desde 1 al numero dado, el numero debe ser natural: ");
    scanf("%d", &num);
    printf("Productoria con aumento: ");
    printf("%d", ProductoriaAumento(num));
    return 0;
}

int ProductoriaAumento(int n){
    if(n==1){
        return 1;
    }else{
        return n * ProductoriaAumento(n-1);
    }
}