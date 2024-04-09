#include <stdio.h>

int main() {
    float valor_real;

    
    printf("Digite um valor real: ");
    scanf("%f", &valor_real);

    
    printf("Valor com uma casa decimal: %.1f\n", valor_real);

    return 0;
}
