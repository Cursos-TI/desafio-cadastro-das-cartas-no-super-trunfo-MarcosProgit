#include <stdio.h>

struct Carta {
    char estado[3];
    char codigo[6];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
};

int main() {
    struct Carta c1, c2;

    // Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: "); scanf("%2s", c1.estado);
    printf("Código: "); scanf("%5s", c1.codigo);
    printf("Cidade: "); scanf(" %49[^\n]s", c1.cidade);
    printf("População: "); scanf("%d", &c1.populacao);
    printf("Área: "); scanf("%f", &c1.area);
    printf("PIB: "); scanf("%f", &c1.pib);
    printf("Pontos: "); scanf("%d", &c1.pontos);

    // Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: "); scanf(" %2s", c2.estado);
    printf("Código: "); scanf(" %5s", c2.codigo);
    printf("Cidade: "); scanf(" %49[^\n]s", c2.cidade);
    printf("População: "); scanf("%d", &c2.populacao);
    printf("Área: "); scanf("%f", &c2.area);
    printf("PIB: "); scanf("%f", &c2.pib);
    printf("Pontos: "); scanf("%d", &c2.pontos);

}