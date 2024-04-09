#include <stdio.h>
int main(){
    int horas,minutos,segundos ;

    printf("Digite o total de horas no total: ");
    scanf("%d", &horas);

    minutos= horas*60;

    printf("Foram contadas %d\n", minutos);

    segundos= minutos* 60;
    printf("O total de segundos do programa é :%d\n", segundos);
  return 0;
}