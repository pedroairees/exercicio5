/*Calcule as raízes da equação de 2º grau. Lembrando que:
A varável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 
• Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.
• Se ∆ ≥ 0, imprima as duas raízes reais. */


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    float a, b, c, delta, x1, x2;


    printf("Digite o valor de a (diferente de zero): ");
    scanf("%f", &a);


    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {
        printf("Digite o valor de b: ");
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        scanf("%f", &c);


        delta = b*b - 4*a*c;


        if (delta < 0) {
            printf("Nao existe raiz.\n");
        } else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Raiz unica: %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Duas raizes reais: %.2f e %.2f\n", x1, x2);
        }
    }


    return 0;

}