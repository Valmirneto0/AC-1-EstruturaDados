#include <stdio.h>

long int fatorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * fatorial (n-1);
    }
    }

void main(void){
    int num = -1;;
    while (num <0){
        printf("Entre com um número: ");
        scanf("%d", &num);
    }
    printf("O fatorial de %d é %d\n", num, fatorial(num));
}


