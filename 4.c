#include <stdio.h>

int main(){
    float ingresso, desconto, valorFinal;
    int condicao;
    printf("Qual o preco do ingresso?: R$");
    scanf("%f", &ingresso);
    if(ingresso>50){
        desconto = ingresso*0.20;
        valorFinal = ingresso - desconto;
        printf("O valor do desconto fica: R$%.2f e o valor final do ingresso fica: R$%.2f", desconto, valorFinal);
    }else if(ingresso>=30 && ingresso<=50){
        printf("Se for estudante digite 1 se nao digite 2: ");
        scanf("%d", &condicao);
        if(condicao==1){
            desconto = ingresso*0.15;
            valorFinal = ingresso - desconto;
            printf("O valor do desconto fica: R$%.2f e o valor final do ingresso fica: R$%.2f", desconto, valorFinal);
        }else if(condicao==2){
            desconto = ingresso*0.05;
            valorFinal = ingresso - desconto;
            printf("O valor do desconto fica: R$%.2f e o valor final do ingresso fica: R$%.2f", desconto, valorFinal);
        }else{
            printf("Voce digitou um numero diferente de 1 ou 2");
        }
    }else{
        printf("Nao tem desconto e o valor final do ingresso fica: R$%.2f", ingresso);
    }

    return 0;
}