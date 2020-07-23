/* Este Programa Lê três notas, calcula a média e
   indica situação do aluno */
#include <stdlib.h>
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, precisa_final;
    
    /* Entrada de Dados */
    printf("Digite as tres notas do aluno: "); 
    scanf("%f%f%f",&nota1, &nota2, &nota3);
    /* Calcula a media */
    media = (nota1 + nota2 + nota3)/3;
    /* Imprime média e mensagem adequada */
    printf("\t***A media = %.1f", media);
    /* Determina situação do aluno */
    if (media >= 7)
        printf("\t***Aprovado");
    else if (media < 4)
        printf("Reprovado");
    else {
        precisa_final = (5 - media * 0.6) /0.4;
        printf ("\t***Fazer Final precisando de %.1f", precisa_final);
    }   
       
    /*Finaliza*/
    printf("\n\n\n");
    system("pause");
    return 0;
}
