#include <stdio.h>
#include <stdlib.h>

int main() {
    int data_hoje, data_nasc, dia_h, mes_h, ano_h,
        dia_n, mes_n, ano_n, idade;

    /* Finalidade do programa */
    printf("Programa que mostra a classificação de uma pessoa"
           " de acordo com sua faixa etária:\n\n");
    /* Leitura das datas */
    printf("Informe a data de hoje como um unico valor numerico(DDMMANO):\n");
    scanf("%d", &data_hoje);
    printf("Informe a data de nascimento da pessoa a ser"
           " classificada como um unico valor:\n");
    scanf("%d", &data_nasc);
    /* Separação em dia, mês e ano */
    ano_h = data_hoje % 10000;
    data_hoje = data_hoje / 10000;
    mes_h = data_hoje % 100;
    dia_h = data_hoje / 100;
    ano_n = data_nasc % 10000;
    data_nasc = data_nasc / 10000;
    mes_n = data_nasc % 100;
    dia_n = data_nasc / 100;
    /* Calculo da idade */
    idade = ano_h - ano_n;
    if (mes_n > mes_h || mes_n == mes_h && dia_n > dia_h)
        idade = idade - 1;
    printf("Idade da pessoa: %d\n", idade);
    /* Classificação */
    if (idade <= 2)
        printf("Bebe!\n");
    else if (idade < 10)
        printf("Crianca!\n");
    else if (idade < 12)
        printf("Pre-adolescente!\n");
    else if (idade < 18)
        printf("Adolescente!\n");
    else if (idade < 60)
        printf("Adulto!\n");
    else
        printf("Idoso!\n");
        
    printf("\n");
    system("pause");
    return 0;
}
