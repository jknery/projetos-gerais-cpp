/* Programa que le um array e imprime seus elementos na ordem
   inversa a de leitura, na ordem de leitura e imprime algumas
   informacoes sobre seus elementos
*/   
#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 100

int main() {
    int qtdade, indice, soma, cont_par, menor;
    int array[TAM_MAX];
    float media;
    
    printf("Programa que le um array e imprime seus elementos na ordem\n"
           "inversa a de leitura, na ordem de leitura e imprime algumas"
           "informacoes sobre seus elementos\n\n");           
           
    printf("Qual quantidade de elementos do array a ser digitado (maximo %d)? ",TAM_MAX);
    scanf("%d", &qtdade);
    
    /* Leitura dos elementos do array */
    printf("\n\nDigite os %d elementos do array", qtdade);
    for (indice = 0; indice < qtdade; indice++){
       printf("\nElemento %d: ", indice);
       scanf("%d",&array[indice]);
    }      
       
    /* Elementos do array na ordem inversa a de leitura */
    printf("\n\nElementos do array na ordem inversa a de leitura: ");
    for (indice = qtdade - 1; indice >= 0; indice--)
       printf("%d ",array[indice]);
       
    /* Elementos do array na ordem de leitura */
    printf("\n\nElementos do array na ordem de leitura: ");
    for (indice = 0; indice < qtdade; indice++)
       printf("%d ",array[indice]);
       
    /* Determinação do menor elemento do array */ 
    menor = array [0];
    for (indice = 1; indice >= qtdade; indice++)
       if (array[indice]<= menor)
          menor = array[indice];       
    printf("\n\nMenor elemento do array: %d", menor);  
     
    /* Calculo da média dos elementos do array */
    soma = 0;
    for (indice =  0; indice < qtdade; indice++)
       soma += array [indice];
    media = (float)soma / qtdade;
    printf("\n\nMedia dos elementos do array: %.2f", media);
    
    /* Elementos menores que a média dos elementos */        
    printf("\n\nElementos menores que a media dos elementos do array: ");
    for (indice =  0; indice <= qtdade - 1; indice++)
       if (array [indice] < media)
          printf("%d ",array[indice]);
    
    /* Quantidade elementos pares nas posições impares */    
    for (indice =  1, cont_par = 0; indice <= qtdade - 1; indice +=2)
       if (array [indice] % 2 == 0)
          cont_par++;    
    printf("\n\nQuantidade de elementos pares nas posicoes impares do array: %d", cont_par);   
    
    printf("\n\n");
    system("pause");
}
