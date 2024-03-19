#include <stdio.h>


int suc(int n) {
    return n + 1;
}


int pred(int n) {
    if (n == 0) {
        printf("Não há predecessor para 0.\n");
        return -1; 
    } else {
        return n - 1;
    }
}

int soma(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2;


    printf("Digite o primeiro número natural: ");
    scanf("%d", &num1);
    printf("Digite o segundo número natural: ");
    scanf("%d", &num2);

    int soma_resultado = soma(num1, num2);

    printf("A soma de %d e %d é %d.\n", num1, num2, soma_resultado);

    return 0;
}