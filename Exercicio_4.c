#include <stdio.h>

int main() {
    
    float not1, not2, not3, not4;
    float media, soma;
    
    
    printf("Digite a primeira nota:");
    scanf("%f", &not1);
    
    printf("Digite a segunda nota:");
    scanf("%f", &not2);
    
    printf("Digite a terceira nota:");
    scanf("%f", &not3);
    
    printf("Digite a quarta nota:");
    scanf("%f", &not4);
    
     soma = not1 + not2 + not3 + not4;
     media = soma / 4.0;
    
    printf("A sua media e de: %.2f\n", media);

    if (media >= 7.00) {
        printf("Aprovado\n");
    } else {
        printf("Recuperacao\n");
    }
 return 0;
}   