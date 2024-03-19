#include <stdio.h>
int calcResto(resto,num2){
    int x = 0;
    while (x == 0)
    {
        resto = resto - num2;
        if (resto < num2){
            break;
        }
        else{
            
        }
    }
    return resto;
}

int main(){
    int num1, num2;
    int resto = 0;
    int x = 0;
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número para dividir o primeiro: ");
    scanf("%d", &num2);
    resto = num1;

    printf("O resto da divisão de %d por %d é: %d ",num1,num2,calcResto(resto,num2));
    

    return 0;
}