#include <stdio.h>
int main(){
    float celsius, fahrenheit;

    printf("Qual a temperatura está em graus Celsius?: ");
    scanf("%f", &celsius);

    fahrenheit= ((9*celsius)+ 160)/5;

    printf("A temperatura em Fahrenheit é: %f\n", fahrenheit);


    return 0;
}