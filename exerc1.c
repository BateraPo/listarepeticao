#include <stdio.h>

int main(){

    int a, b;

    printf("Coloque dois numero diferentes: \n ");
    scanf("%d %d", &a, &b);

    if  (a > b) {

        printf("O numero maior e: %d\n",a);
    }
     if (b > a) {
        printf("O numero maior e: %d\n", b);
    }
     if (a == b) {
        printf("OS numeros sao iguais\n");
    }
}