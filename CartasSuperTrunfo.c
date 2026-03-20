#include <stdio.h>

int main(){

    // Carta 1
    char Estado;
    char Codigo_carta[4];
    char Nome_da_cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int pontos;

    // Carta 2
    char Estado2;
    char Codigo_carta2[4];
    char Nome_da_cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int pontos2;

    // ===== CARTA 1 =====
    printf("Carta 1\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome_da_cidade);

    printf("Populacao: \n");
    scanf("%d", &Populacao);

    printf("Area: \n");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos);

    // ===== CARTA 2 =====
    printf("\nCarta 2\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome_da_cidade2);

    printf("Populacao: \n");
    scanf("%d", &Populacao2);

    printf("Area: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos2);

    // ===== EXIBIÇÃO =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo_carta);
    printf("Cidade: %s\n", Nome_da_cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos: %d\n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo_carta2);
    printf("Cidade: %s\n", Nome_da_cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos: %d\n", pontos2);

    return 0;
}
