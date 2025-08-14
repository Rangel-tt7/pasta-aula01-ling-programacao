#include <stdio.h>

int main() {
    char nome[100], curso[100];
    int idade, nascimento;
    

    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf("%s", curso);

    nascimento = 2025 - idade;

    printf("Ola %s, voce tem %d anos e e nascido em %d, e esta cursando %s atualmente.", nome, idade, nascimento, curso);
return 0;
}