#include <stdio.h>
int main (){
    int a, b, x;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    x=a;
    a=b;
    b=x;

    printf("O novo valor de A: %d\n", a);
    printf("O novo valor de B: %d\n", b);   

    return 0;
}