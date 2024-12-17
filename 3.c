#include <stdio.h>

int main(){
    float peso, valorOriginal, desconto, valorFinal;
    int vip;
    printf("Qual o valor do frete?: R$");
    scanf("%f", &valorOriginal);
    printf("Qual o peso da encomenda?: ");
    scanf("%f", &peso);
    if(peso>30){
        desconto = valorOriginal*0.15;
        valorFinal = valorOriginal-desconto;
        printf("O valor final com o desconto fica: R$%.2f", valorFinal);
    }else if(peso>=15 && peso<=30){
        printf("Digite 1 se for VIP ou 2 se for comum: ");
        scanf("%d", &vip);
        if(vip==1){
            desconto = valorOriginal*0.10;
            valorFinal = valorOriginal-desconto;
            printf("O valor final com o desconto fica: R$%.2f", valorFinal);
        }else if(vip==2){
            desconto = valorOriginal*0.05;
            valorFinal = valorOriginal-desconto;
            printf("O valor final com o desconto fica: R$%.2f", valorFinal);
        }else{
            printf("Voce digitou um numero diferente de 1 ou 2");
        }
    }else{
        printf("Nao tem desconto, o valor final fica: R$%.2f", valorOriginal);
    }

    return 0;
}