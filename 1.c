#include <stdio.h>

int main(){
    float salario, imposto, salarioLiquido;
    int dependentes;
    printf("Informe o salario: R$");
    scanf("%f", &salario);
    
    if(salario>4500){
        imposto = salario*(27.5/100);
        salarioLiquido = salario - imposto;
        printf("o salario e: R$%.2f, o imposto fica: R$%.2f e o salario liquido fica: R$%.2f", salario, imposto, salarioLiquido);
    }else if(salario>=3000 && salario<=4500){
        printf("Se tiver dependentes digite 1, se nao, digite 0: ");
        scanf("%d", &dependentes);
        if(dependentes==1){
            imposto = salario*0.15;
            salarioLiquido = salario - imposto;
            printf("o salario e: R$%.2f, o imposto fica: R$%.2f e o salario liquido fica: R$%.2f", salario, imposto, salarioLiquido);
        }else if(dependentes==0){
            imposto = salario*(22.5/100);
            salarioLiquido = salario - imposto;
            printf("o salario e: R$%.2f, o imposto fica: R$%.2f e o salario liquido fica: R$%.2f", salario, imposto, salarioLiquido);
        }else{
            printf("Informe um dependente valido");
        }
    }else{
        imposto = salario*(7.5/100);
        salarioLiquido = salario - imposto;
        printf("o salario e: R$%.2f, o imposto fica: R$%.2f e o salario liquido fica: R$%.2f", salario, imposto, salarioLiquido);
    }
    
    return 0;
}