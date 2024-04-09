#include <stdio.h>

int main() {
    int numero;

   
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    int paridade = numero % 2 == 0; 
    int indice = paridade; 
   
    char resultado[2][7] = {"ímpar", "par"};

    
    printf("O número %d é %s.\n", numero, resultado[indice]);

    return 0;
}
