#include <stdio.h>
int main (){
    float volume,comprimento,largura,altura;

    printf("O valor do comprimento da piscina é: ");
    scanf("%f", &comprimento);

    printf("O valor da largura da piscina é: ");
    scanf("%f", &largura);

    printf("O valor da altura da piscina é: ");
    scanf("%f", &altura);

    volume= comprimento*altura*largura;

    printf("O valor do volume da piscina é: %f\n", volume);

return 0;
}  