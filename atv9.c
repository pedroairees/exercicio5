/* Uma empresa decide dar um aumento aos seus funcion�rios de acordo com uma tabela que considera o salario atual e o tempo de servi�o de cada funcion�rio. Os funcion�rios com menor salario ter�o um aumento proporcionalmente maior do que os funcion�rios  com um salario maior, e conforme o tempo de servi�o na empresa, cada funcion�rio ir� receber um b�nus adicional de sal�rio. Fa�a um programa que leia: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    float salarioAtual, novoSalario;
    int tempoServico;
    char nome[20];

    printf("Ol�, me informe seu nome por favor: ");
    scanf("%s", nome);
    printf("\nOl�, %s, me informe o seu sal�rio atual na empresa: ", nome);
    scanf("%f", &salarioAtual);
    printf("\nAgora me informe a quantos anos voc� trabalha aqui (em n�meros): ");
    scanf("%d", &tempoServico);

    if(salarioAtual <= 500) {
        novoSalario = salarioAtual * 1.25;
    } else if (salarioAtual <= 1000) {
        novoSalario = salarioAtual * 1.20;
    } else if (salarioAtual <= 1500) {
        novoSalario = salarioAtual * 1.15;
    } else if (salarioAtual <= 2000) {
        novoSalario = salarioAtual * 1.10;
    } else {
        novoSalario = salarioAtual;
    }


    if(tempoServico < 1) {
        novoSalario += 0;
    } else if (tempoServico >= 1 && tempoServico <= 3) {
        novoSalario += 100;
    } else if (tempoServico >= 4 && tempoServico <= 6) {
        novoSalario += 200;
    } else if (tempoServico >= 7 && tempoServico <= 10) {
        novoSalario += 300;
    } else {
        novoSalario += 500;
    }



    printf("\nSeu sal�rio conforme a tabela e com bonus �: %.2f", novoSalario);
    
}


    