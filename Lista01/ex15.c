#include <stdio.h>
int main(){
    int dias;

    printf("Digite a quantidade de dias que o trabalhador foi ao trabalho?:");
    scanf("%d", &dias);
    
    float receber, novo_valor;

    if (dias<=10) {
        receber= dias*50.25;
    }
     else if (dias <=20) {
        receber=(dias*50.25) + (0.20*dias*50.25);
    }
    else{
        receber=(dias*50.25) + (0.30*dias*50.25);
    }

    printf("O valor sem impostos é: %f\n", receber); 

    novo_valor= receber- (0.10*receber); 
    
    printf("O valor com impostos é: %f\n", novo_valor);
      return 0;
}