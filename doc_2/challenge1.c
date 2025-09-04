#include <stdio.h>

int main() {
    int d1, d2, d3, d4, d5;

    printf("Entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d", &d1, &d2, &d3, &d4, &d5);

    printf("Prefixe GS1 : %d\n", d1);
    printf("Identifiant de groupe : %d\n", d2);
    printf("Code de l'editeur : %d\n", d3);
    printf("Numero d'article : %d\n", d4);
    printf("Chiffre de controle : %d\n", d5);

    return 0;
}