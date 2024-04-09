#include <stdio.h>
int main(){
    int x;
    printf("Digite um numero natural: ");
    scanf("%d", &x);

    printf("O sucessor de x é: %d\n", x+1);
    printf("O antecessor de x é: %d\n", x-1);
    return 0;
}