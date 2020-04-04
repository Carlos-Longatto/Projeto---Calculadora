#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opmenu, opoperacao;

    printf("\tNOME DO SISTEMA\n\n\n\t\tMenu\n\tEscolha o numero da funcao desejada:\n\n");
    printf("\t1.   f(x) = k\n"
           "\t2.   f(x) = x^k\n"
           "\t3.   f(x) = k^x\n"
           "\t4.   f(x) = e^x\n"
           "\t5.   f(x) = log k (x)\n"
           "\t6.   f(x) = ln(x)\n"
           "\t7.   f(x) = 1/x\n"
           "\t8.   f(x) = sen(x)\n"
           "\t9.   f(x) = cos(x)\n"
           "\t10.  f(x) = tg(x)\n"
           "\t11.  SAIR\n");
           scanf("%d", &opmenu);
           system("cls");

    printf("\tNOME DO SISTEMA\n\n");
    printf("\t1.   Funcao\n"
           "\t2.   Derivada\n"
           "\t3.   Integral Definida\n"
           "\t4.   VOLTAR AO MENU PRINCIPAL\n");
           scanf("%d",opoperacao);
           system("cls");

    return 0;
}
