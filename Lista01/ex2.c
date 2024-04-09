#include <stdio.h>
int main(){
    int x;
    printf("Digite um número inteiro:");
    scanf("%d", &x);

    printf("Agora veja o valor em Hexadecimal: %x\n", x);
    printf("Agora veja o valor em Octadecimal: %o\n", x);
    
    return 0;
}