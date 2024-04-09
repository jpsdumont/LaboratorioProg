#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    int valor_absoluto = abs(numero);

    printf("O valor absoluto de %d é: %d\n", numero, valor_absoluto);

    return 0;
}
