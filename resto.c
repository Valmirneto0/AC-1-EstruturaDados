#include <stdio.h>
int calcResto(num1,num2){
    if (num1<num2){
        return num1;
    }else{
        return calcResto(num1-num2,num2);
    }
}

int main(){
    int num1, num2;
    int resto = 0;
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número para dividir o primeiro: ");
    scanf("%d", &num2);
    resto = num1;

    printf("O resto da divisão de %d por %d é: %d ",num1,num2,calcResto(resto,num2));
    

    return 0;
}