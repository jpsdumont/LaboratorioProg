#include <stdio.h>
int main() {
    float x;
    printf("O valor da conta do restaurante é: ");
    scanf("%f", &x);

    float taxa = 0.10 * x;

    float vt = x + taxa;

    printf("O valor total da conta é : %2.f\n", vt);
    

    return 0;
}