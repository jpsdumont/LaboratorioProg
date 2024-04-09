#include <stdio.h>
int main() {
    int x;

    printf("Digite um valor inteiro X: ");
    scanf("%d", &x);

    printf("O valor do triplo de X é: %d\n ", 3*x);
    printf("O valor do quadrado de X é: %d\n", x*x);
    printf("O valor da metade de X é : %f\n", (float)x/2);

    return 0;


}