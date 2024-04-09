#include <stdio.h>
int main() {

    float real,dolar;
    printf("Quantos reais o cliente deseja converter: ");
    scanf("%f", &real);

    dolar= real/ 4.96;

    printf("O valor convertido em dolar é: %f\n", dolar);

    return 0 ;
}