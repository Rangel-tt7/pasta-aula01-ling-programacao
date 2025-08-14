#include <stdio.h>

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;
    printf("Digite um numero:");
    scanf("%d",&num1);
    printf("Digite o outro numero:");
    scanf("%d",&num2);
printf("Resultado das operacoes basicas:\n");
 soma = num1 + num2;
 subtracao = num1 - num2;
 multiplicacao = num1 * num2;
 if (num2 !=0) {
    divisao = (float)num1 / num2;
    printf("Divisao: %.2f\n", divisao);
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacaoo: %d\n", multiplicacao);

 } else {
    printf("Divisao por zero não é permitida.\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

 }
    return 0;
 
}