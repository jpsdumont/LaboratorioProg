#include<stdio.h>
int main(){
    int raio;
    
    printf("Digite o Raio do circulo:");
    scanf("%d", &raio);

    float diametro ,area ,circuferencia;


    diametro = raio/2;

    printf("O valor do diametro é : %f\n ", diametro);

    circuferencia = 2*3.14159 *raio;
    printf("O valor da circufenecia é: %f\n", circuferencia);

    area = 3.14159 * (raio*raio);
    printf("O valor do raio do circulo é: %f\n", area);


    return 0;
}