#include <stdio.h>
int quociente(int num1,int num2){
    if (num1<num2){
        return 0;
    }else{
        return 1 + quociente(num1-num2,num2);
    }
}

int main(){
    int num1, num2;
    int quoc = 0;
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número para dividir o primeiro: ");
    scanf("%d", &num2);

    printf("O quociente da divisão de %d por %d é: %d ",num1,num2,quociente(num1,num2));
    
    

    return 0;
}