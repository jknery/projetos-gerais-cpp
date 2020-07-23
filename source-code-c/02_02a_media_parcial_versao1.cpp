/* Este Programa Lê três notas, calcula a média e
   indica situação do aluno */
#include <stdlib.h>
#include <stdio.h>

int main(){
    int nota1, nota2, nota3, media, precisa_final;
    
    /* Entrada de Dados */
    printf("Digite as tres notas do aluno: "); 
    scanf("%d %d %d",&nota1, &nota2, &nota3);
    
    /* Calcula a media */
    media = (nota1 + nota2 + nota3) / 3.0;
       
    /* Determina situação do aluno */
    if (media < 4 )
        printf("\nMedia = %d *** Reprovado", media);     
    
    if (media >= 7)
        printf("\nMedia = %d *** Aprovado por Media", media);    
    
    if (media >= 4 && media <= 7) {
        precisa_final = (25 - media * 3) / 2; 
        printf("\nMedia = %d *** Vai Fazer Final "
               "precisando de %d", media, precisa_final);        
    }
          
    /* Finaliza */
    printf("\n\n\n");
    system("pause");
    return 0;
}
