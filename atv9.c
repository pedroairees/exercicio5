/* Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    float salarioAtual, novoSalario;
    int tempoServico;
    char nome[20];

    printf("Olá, me informe seu nome por favor: ");
    scanf("%s", nome);
    printf("\nOlá, %s, me informe o seu salário atual na empresa: ", nome);
    scanf("%f", &salarioAtual);
    printf("\nAgora me informe a quantos anos você trabalha aqui (em números): ");
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



    printf("\nSeu salário conforme a tabela e com bonus é: %.2f", novoSalario);
    
}


    