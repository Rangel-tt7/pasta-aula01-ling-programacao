#include <stdio.h>

int main() {
    int C;
    int opcao;
    float F, quilometros, libras, metros, quilos;
   
   do
   {
    printf("Conversor de unidades\n");
    printf("O que deseja converter hoje?\n digite 1 para Celsius para Fahrenheit\n digite 2 para converter metros para quilometros\n digite 3 para converter quilos para libras\n digite 0 para encerrar o programa\n");
    scanf("%d", &opcao);
    if (opcao == 1 ) { 
    printf("===Conversor Temperatura===\n");
    printf("Digite um valor em Graus Celcius: ");
    scanf("%d", &C);
    F = (C * 9 / 5) + 32; 
    printf("Valor em Graus Fahrenheit: %.2f\n", F);
        
    } else if (opcao == 2) {
        printf("===Conversor Distancia===\n");
        printf("Digite um valor em Metros: ");
        scanf("%f", &metros);
        float quilometros = metros/ 1000.0; 
        printf("Valor em Quilometros: %.2f\n", quilometros);
        
    } else if (opcao == 3) {
        printf("===Conversor Peso===\n");
        printf("Digite um valor em Quilos: ");
        scanf("%f", &quilos);
        float libras = quilos * 2.20462;
        printf("Valor em Libras: %.2f\n", libras);
        
    } else {
        printf("Opção inválida.\n");
    } 
    } while (opcao != 0);

    printf("Programa encerrado.\n");


    return 0;
}
    
    