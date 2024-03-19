#include <stdio.h>
int quociente(quoc,resto,num2){
    int x = 0;
    while (x == 0)
    {
        resto = resto - num2;
        if (resto < num2){
            break;
        }
        else{
            quoc = quoc + 1;
        }
    }
    return quoc;

}
int main(){
    int num1, num2, quoc = 1;
    int resto = 0;
    int x = 0;
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número para dividir o primeiro: ");
    scanf("%d", &num2);
    resto = num1;

    printf("O quociente da divisão de %d por %d é: %d ",num1,num2,quociente(quoc,resto,num2));
    

    return 0;
}