/* Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("* Bem Vindo ao Programa! *\n");
    printf("Esse programa receber um valor INTEIRO digitado por você, e retorna te falando se o número digitado é par ou impar!\n");
    printf("Digite o seu número por favor: ");
    scanf("%d", &num);

    while(num < 0) {
        if(num<0) {
            printf("\nVocê não pode digitar números negativos!\n");
            printf("Digite um número INTEIRO e POSITIVO: ");
            scanf("%d", &num);
        }
    }

    if(num % 2 == 0) {
        printf("\nO número %d é par!", num);
    } else {
        printf("\nO número %d é impar!", num);
    }

}