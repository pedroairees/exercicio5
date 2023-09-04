/* Codifique um programa que l� um n�mero inteiro. A seguir o programa deve imprimir uma mensagem para o usu�rio dizendo se o n�mero digitado � par. Se o n�mero n�o for par, o programa n�o deve fazer nada. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("* Bem Vindo ao Programa! *\n");
    printf("Esse programa receber um valor INTEIRO digitado por voc�, e retorna te falando se o n�mero digitado � par ou impar!\n");
    printf("Digite o seu n�mero por favor: ");
    scanf("%d", &num);

    while(num < 0) {
        if(num<0) {
            printf("\nVoc� n�o pode digitar n�meros negativos!\n");
            printf("Digite um n�mero INTEIRO e POSITIVO: ");
            scanf("%d", &num);
        }
    }

    if(num % 2 == 0) {
        printf("\nO n�mero %d � par!", num);
    } else {
        printf("\nO n�mero %d � impar!", num);
    }

}