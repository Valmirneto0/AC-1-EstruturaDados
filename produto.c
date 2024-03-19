#include <stdio.h>

int calcProd(int num1,int num2){
    if (num2 == 0){
        return 0;
    }else{
        return num1 + calcProd(num1, num2 - 1);
    }
}

int main(){

    int num1, num2;
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número para multiplicar o primeiro: ");
    scanf("%d", &num2);
    
    printf("O produto de %d e %d é: %d\n",num1,num2,calcProd(num1,num2));
    
    return 0; 
}