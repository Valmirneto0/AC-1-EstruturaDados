#include <stdio.h>

int fatorial(numero) {
        int rslt = 1;
        for (int x = 2; x <= numero; x++){
            rslt = rslt * x;
        }
        return rslt;
    }

int main(){
    int num;
    printf("Escreva um número para calcular o fatorial: ");
    scanf("%d", &num);

    printf("O fatorial de %d é: %d", num, fatorial(num));
    return 0;
}


