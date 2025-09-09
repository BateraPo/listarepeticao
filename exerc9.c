#include <stdio.h>



// Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética m/total 
// obtida pelo aluno. Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado por nota

int main(){
    char nome[50];
    int nota1, nota2, nota3;
    float media;

    printf("Escreva o nome do aluno\n");
    scanf("%s", &nome);

    printf("Escreva a primeira nota\n");
    scanf("%d", &nota1);

    printf("Escreva a segunda nota\n");
    scanf("%d", &nota2);

    printf("Escreva a terceira nota\n");
    scanf("%d", &nota3);


    media = (nota1+ nota2 + nota3) /3;

    if (media > 70){
        printf("O aluno com nome %s foi aprovado direto com a media %.2f", nome, media);
    } else if(media >= 50 && media <=70){
        printf("O aluno com nome %s ficou em recuperacao com a media %.2f", nome, media);
    }   else{
        printf("O aluno com nome %s foi reprovado por nota com a media %.2f", nome, media);
    }
}