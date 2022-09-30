#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
    printf(" Programa que calcula e mostra na tela o valor em Reais de cada KW\n");
    printf(" O valor da conta da residencia\n");
    printf(" E novo valor aplicando 10%% de desconto\n");
    printf("\n Autor: Luiz Felipe Luz Santos \n");
    printf("\n Calc_KW\n");

    double salario, kwgasto, umkw, valor, valord;

    printf("\nInforme o valor do salario: ");
    scanf("%lf",&salario);

    printf("\n\nInforme total Kw gasto na residencia: ");
    scanf("%lf",&kwgasto);

    umkw = salario/7/100;
    valor = kwgasto * umkw;
    valord = (kwgasto * umkw) * 0.90;

    printf("\n\nO valor de 1 Kw e: %3.2lf\n\n",umkw);
    printf("\nO valor a ser pago pela residencia e: %4.2lf", valor);
    printf("\n\nNovo valor a ser pago com desconto de 10%% e: %3.2lf\n\n", valord);


    return 0;
}
