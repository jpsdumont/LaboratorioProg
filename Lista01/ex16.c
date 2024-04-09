#include <stdio.h>
#include <stdlib.h>
int main(){
    int valor_aula,numero_aula;

    printf("Para descobrir o valor do salario de um professor, diga o valor da hora aula dele:");
    scanf("%d", &valor_aula);

    printf("Para descobrir o valor do salario de um professor, diga quantas horas ele trabalha: ");
    scanf("%d", &numero_aula);

    float salario_bruto,salrio_liq;

    salario_bruto= valor_aula*numero_aula;

    printf("O valor do salario bruto desse professor é: %f\n", salario_bruto);

    if (salario_bruto<=1.412)
    {
        salrio_liq= salario_bruto- (salario_bruto*0.075);
    }
    else if (salario_bruto<=2666.68)
    {
        salrio_liq= salario_bruto-(salario_bruto*0.09);
    }else if (salario_bruto<=4000.03)
    {
        salrio_liq=salario_bruto-(salario_bruto*0.12);
    }
    else{
        salrio_liq=salario_bruto-(salario_bruto*0.14);
    }
    
    printf("O salario liquido desse professor é : %f\n", salrio_liq);
      return 0;
}