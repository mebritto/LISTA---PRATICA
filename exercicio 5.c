#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int p;
    int r;
    int q;

    printf("digite seu RG (com 8 digitos sem pontos ou caracteres), separando-os por espaços: ");
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    p = 2*a + 3*b + 4*c + 5*d + 6*e + 7*f + 8*g + 9*h;
    r = p % 11;
    q = 11 - r;

    if(q>=0 && q<=9){
        printf("o numero veriicador eh: %d\n", q);
        }
        else{
            printf("o digito verificador eh: X\n");
        }

return 0;
}
