//Octavio Gentile 44898506 c3
//FIBONACCI

#include <stdio.h>

int num;

int fibonacci(int n);

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fibonacci(n-1)*fibonacci(n-2);
    }
}

int main(){
    while (num<=0){
        printf("Ingrese que número de la serie fibonacci quiere saber: ");
        scanf("%d", &num);
    }
    printf("%d", fibonacci(num));
}