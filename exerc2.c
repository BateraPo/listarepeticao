#include <stdio.h>

int main(){

    int numero, resto;

    printf("Escreva um numero\n");
    scanf("%d", &numero);

   resto = numero % 2;

    if (resto == 0){
        printf("O numero %d e Par\n", numero);
    } else {
        printf("O numero %d e Impar\n", numero);
    }

}