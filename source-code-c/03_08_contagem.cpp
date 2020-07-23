/* Programa que imprime o total de Aprovados,
  Reprovados e Fazer Final */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cont, contA = 0, contR = 0, contF = 0; /*Os contadores precisam ser inicializados com 0 */
    float media;
    
    printf("Impressao do total de Aprovados, Reprovados e Fazer Final:\n\n");
    
    printf("Qual a quantidade de medias a serem digitadas: ");
    scanf("%d", &n);

    printf("\nDigite as %d medias:\n\n", n);
    for(cont = 1; cont <= n; cont += 1){
        printf("Media %d: ", cont);
        scanf("%f",&media);
        if(media >= 4 && media < 7)
           contF++;
        else if(media < 4)
           contR++;
        else
           contA++;
    }
    

    printf("\n Aprovados por media: %d \n Fizeram Final: %d \n Foram Reprovados: %d\n", 
           contA, contF, contR);
    
    printf("\n");
    system("pause");
    return 0;
}
