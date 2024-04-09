#include <stdio.h>

int main() {

    float altura, peso;
    char sexo;

    
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    puts("Digite o sexo da pessoa(Homem ou mulher):");
    scanf(" %c", sexo);

    if( sexo == 'Homem'){
        peso= 72.7*altura -58;
    }
    else if( sexo == 'Mulher'){
        peso = 62.1*altura - 44.7;
    }

    printf(" O peso ideal da pessoa é: %2.f\n", peso);
    return 0;
    
}

