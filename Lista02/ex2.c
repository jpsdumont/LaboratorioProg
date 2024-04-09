#include <stdio.h>

int main(){

    int dia;
    do{
        printf("Digite um número de 1 a 7 para obter um dia da semana(ou 0 para encerrar)");
        scanf("%d", &dia);

        if(dia == 0){
            printf("Encerrando o programa..");

        }else if(dia>0 && dia<=7){
           switch(dia){
            case 1:
            printf("Domingo\n");
            break;
            case 2:
            printf("Segunda\n");
            break;
            case 3:
            printf("Terça\n");
            break;
            case 4:
            printf("Quarta\n");
            break;
            case 5:
            printf("Quinta\n");
            break;
            case 6:
            printf("Sexta\n");
            break;
            case 7:
            printf("Sabado\n");
            break;
           }
        
        }else{
            printf("Codigo invalido.");
        }
    }while (dia != 0);

    return 0 ;
    
    
    
}