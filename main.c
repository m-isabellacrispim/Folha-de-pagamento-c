#include <stdio.h>

int main(void){

    float ir, vh, inss, fgts, des, sbrt, sliq;
    int pir, ht;

    printf("Digite o valor da sua hora:\n");
    scanf("%f", &vh);
    printf("Digite suas horas de trabalhadas:\n");
    scanf("%d", &ht);

    sbrt = vh * ht; 
    inss = sbrt * 0.1;
    fgts = sbrt * 0.11;
    

    if(sbrt <= 900){
        pir = 0;
        ir = 0;
    }
    if(sbrt <= 1500 && sbrt > 900){
        pir = 5;
        ir = sbrt * 0.05;
    }
    if(sbrt <= 2500 && sbrt > 1500){
        pir = 10;
        ir = sbrt * 0.1;
    }
    if(sbrt > 2500){
        pir = 20;
        ir = sbrt * 0.2;
    }

    des = inss + ir;
    sliq = sbrt - des;

    
    printf("Salario Bruto: (%d x %.2f): R$ %.2f\n", ht, vh, sbrt);
    printf("(-) Imposto de Renda (%d): R$ %.2f\n", pir, ir);
    printf("(-) INSS (10): R$ %.2f\n", inss);
    printf("FGTS (11): R$ %.2f\n", fgts);
    printf("Total de descontos: R$ %.2f\n", des);
    printf("Salario Liquido: R$ %.2f\n", sliq);

    return 0;

}
