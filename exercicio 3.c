#include <stdio.h>
#include <stdlib.h>

int main(){

int a;

    printf("Digie seu numero: ");
    scanf("%d", &a);

        while(a<10){
            if((a%2==0)&&(a%3==0)){
                printf("%d: Pim Pam\n", a);
                                  }
            else{
                if(a%2==0){
                    printf("%d: Pim\n", a);
                          }
                else{
                    if(a%2==0){
                        printf("%d: Pam\n", a);
                              }
                    else{
                        printf("%d: %d\n", a, a);
                        }
                    }
                }
    a++;
                    }

    return 0;
            }
