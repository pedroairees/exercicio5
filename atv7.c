/* Fa�a um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a m�dia do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprova��o deve ser igual ou  superior a 7.0 pontos. */

#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    float prova1, prova2, prova3, media;

    printf("Ol�, aqui voc� pode nos da o valor de cada prova, e ao final somaremos a sua m�dia e diremos se foi aprovado!\n");
    printf("Digite o valor da primeira prova: ");
    scanf(" %f", &prova1);

    printf("\nAgora digite o valor da segunda prova: ");
    scanf(" %f", &prova2);

    printf("\nAgora o valor da terceira prova: ");
    scanf(" %f", &prova3);

    media = (prova1 + prova2 + (prova3 * 2)) / 4;

    if(media >= 7.0) {
        printf("\n\nSua m�dia foi %.2f\n", media);
        printf("Voc� foi aprovado!");
    } else {
        printf("\n\nSua m�dia foi %.2f\n", media);
        printf("Infelizmente voc� foi reprovado");
    }

}