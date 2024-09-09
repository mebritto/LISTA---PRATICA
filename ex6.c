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
    int i;
    int p;
    int q;
    int r1;
    int r2;
    int X1;
    int X2;

    printf("digite os primeiros 9 digitos do seu CPF, separando-os por espaços: ");
    scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);


    X1 = 10*a + 9*b + 8*c + 7*d + 6*e + 5*f + 4*g + 3*h + 2*i;
        r1 = X1 % 11;

        if((r1>2)&&(r1<=9)){
            p = 11 - r1;
            printf("seu primeiro digito de verificação é: %d\n", p);
                    }
                else{
                    p = 0;
                    printf("seu primeiro digito de verificação é: %d\n", p);
                }

    X2 = 11*a + 10*b + 9*c + 8*d + 7*e + 6*f + 5*g + 4*h + 3*i + 2*p;
        r2 = X2 % 11;


        if((r2>2)&&(r2<=9)){
            q = 11 - r2;
            printf("seu primeiro digito de verificação é: %d\n", q);
                    }
                else{
                    q = 0;
                    printf("seu primeiro digito de verificação é: %d\n", q);
                }

return 0;
}
