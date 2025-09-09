#include <stdio.h>

int main(){

    float grana, falta;

    printf("Quanto dinheiro voce tem para comprar o videogame?\n");
    scanf("%f", &grana);


    if (grana >= 2500){
        printf("Voce tem dinhiero para comprar o videogame\n");
    }
        else{
            printf("Faltam %.2f para voce comprar o videogame\n", (2500 - grana));
        }
    
}