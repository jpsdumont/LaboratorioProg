#include <stdio.h>

int main() {
    int dia;

    while (1) {
        printf("Digite um número de 1 a 7 para obter o dia da semana (ou 0 para sair): ");
        scanf("%d", &dia);

        if (dia == 0) {
            printf("Encerrando o programa...\n");
            break;
        } else if (dia >= 1 && dia <= 7) {
            switch (dia) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda-feira\n");
                    break;
                case 3:
                    printf("Terça-feira\n");
                    break;
                case 4:
                    printf("Quarta-feira\n");
                    break;
                case 5:
                    printf("Quinta-feira\n");
                    break;
                case 6:
                    printf("Sexta-feira\n");
                    break;
                case 7:
                    printf("Sábado\n");
                    break;
            }
        } else {
            printf("Número de dia inválido\n");
        }
    }

    return 0;
}
