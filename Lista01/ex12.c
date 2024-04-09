#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &y);

    int soma, produto, diferenca;
    soma= x+y;

    produto= x*y;

    diferenca= x-y;

    float quociente;
    quociente= x/y;

    printf("O valor da soma dos numeros é: %d\n", soma);
    printf("O valor do produto dos numeros é: %d\n", produto);
    printf("O valor da diferença dos numeros é: %d\n", diferenca);
    printf("O valor da divisão dos numeros é: %2.f\n", quociente);
    


    return 0 ;
}