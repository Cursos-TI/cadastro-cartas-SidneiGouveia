#include <stdio.h>

int main() {

    // Cartas (dados fixos)
    char nome1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 1.8;
    int turismo1 = 5;
    float densidade1 = populacao1 / area1;

    char nome2[] = "Argentina";
    int populacao2 = 45380000;
    float area2 = 2780000.0;
    float pib2 = 0.5;
    int turismo2 = 3;
    float densidade2 = populacao2 / area2;

    int escolha;

    // Menu interativo
    printf("===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR VENCE)\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha);

    printf("\nComparando %s X %s\n", nome1, nome2);

    switch(escolha) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            
            if(populacao1 > populacao2) {
                printf(">>> %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf(">>> %s venceu!\n", nome2);
            } else {
                printf(">>> Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if(area1 > area2)
                printf(">>> %s venceu!\n", nome1);
            else if(area2 > area1)
                printf(">>> %s venceu!\n", nome2);
            else
                printf(">>> Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f trilhões\n", nome1, pib1);
            printf("%s: %.2f trilhões\n", nome2, pib2);

            if(pib1 > pib2)
                printf(">>> %s venceu!\n", nome1);
            else if(pib2 > pib1)
                printf(">>> %s venceu!\n", nome2);
            else
                printf(">>> Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, turismo1);
            printf("%s: %d pontos\n", nome2, turismo2);

            if(turismo1 > turismo2)
                printf(">>> %s venceu!\n", nome1);
            else if(turismo2 > turismo1)
                printf(">>> %s venceu!\n", nome2);
            else
                printf(">>> Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR VENCE)\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if(densidade1 < densidade2)
                printf(">>> %s venceu!\n", nome1);
            else if(densidade2 < densidade1)
                printf(">>> %s venceu!\n", nome2);
            else
                printf(">>> Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
