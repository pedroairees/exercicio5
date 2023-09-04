/* Leia a idade e o tempo de servi�o de um trabalhador e escreva se ele pode ou n�o se  aposentar. As condi��es para aposentadoria s�o: ? Ter pelo menos 65 anos; ? Ou ter trabalhado pelo menos 30 anos;, ? Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[25];
    int idade, tempoDeServico;

    printf("Boa tarde, me informe seu primeiro nome por favor: ");
    scanf("%s", nome);

    printf("\n%s, me informe sua idade por favor: ");
    scanf("%d", &idade);

    printf("\n%s me informe seu tempo de servi�o por favor (anos): ", nome);
    scanf("%d", &tempoDeServico);

    if(idade >= 65 || tempoDeServico >= 30 || idade >= 60 && tempoDeServico >= 25) {
        printf("%s, voc� j� pode se aposentar!", nome);
    } else {
        printf("%s, voc� ainda n�o pode se aposentar!", nome);
    }
}