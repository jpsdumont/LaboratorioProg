#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    
    int resultado = num1 % num2; 

    
    int isMultiplo = (resultado == 0);

    
    printf("%d %s múltiplo de %d\n", num1, isMultiplo ? "é" : "não é", num2);

    return 0;
}
