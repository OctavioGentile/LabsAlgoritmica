//Octavio Gentile 44898506 c3
//FactorialEnAumentoEnCola
#include <stdio.h>

int num, resultado;
char msj[100];

int factorialAumento(int n);
void FactorialCola(int n, int res);
void menu();

int main(){
    menu();
    return 0;
}

int factorialAumento(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorialAumento(n-1);
    }
}

void FactorialCola(int n, int res){
    if(n==0){
        res = 1;
    }else{
        if(n==1){
            res=1;
        }else{
            res = res * n;
            FactorialCola(n-1, resultado);
        }
    }
}

void menu(){
    printf("Ingrese un valor para ver su factorial en ambas versiones, en caso de ingresar negativo se finaliza el programa: ");
    scanf("%d", &num);
    while(num>=0){
        resultado = 1;
        printf("Factorial con aumento: ");
        printf("%d \n", factorialAumento(num));
        FactorialCola(num, resultado);
        printf("Factorial con cola: ");
        printf("%d \n", resultado);
        printf("Otro Factorial: ");
        scanf("%d \n", &num);
    }
}
