#include <stdio.h>
#include <stdlib.h>

//calculando o maximo divisor comum
int mdc(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
    }

//calculando o minimo multiplo comum
int mmc(int a, int b){
return (a*b) / mdc(a,b);
}

int main(){

    int n1;
    int n2;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &n1);
    printf("\ndigite o segundo numero inteiro positivo: ");
    scanf("%d", &n2);

        printf("MDC - Maximo divisor comum entre %d e %d eh: %d\n", n1, n2, mdc(n1, n2));
        printf("MMC - Minimo multiplo comum entre %d e %d eh: %d\n", n1, n2, mmc(n1, n2));

    return 0;
}

