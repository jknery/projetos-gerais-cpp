/* Exercício do Deitel pág. 93, fig. 4.7 (switch) */ 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    int grau, contA, contB, contC;
    
    contA = contB = contC = 0;
    
    printf("Digite os conceitos de a,b ou c. Para finalizar <contol + Z>: \n\n");

    while ((grau = getchar()) != EOF) {
        switch (grau){               
                case 'A' : case 'a' :      /* o conceito é A */
                     contA++;
                     break;                
                case 'B' : case 'b' :      /* o conceito é B */
                     contB++;
                     break;                 
                case 'C' : case 'c' :      /* o conceito é C */
                     contC++;
                     break;                 
                case ' ' : case '\n' :     /* ignore  esse caractere */
                     break;                     
                default :                  /* no caso de não ser nenhum dos outros casos */                     
                     printf ("\n\nConceito Errado! Digite novamente.\n");
                     break;   
        } 
    }
    
    printf("\n\n\nTotais: Conceito A = %d, Conceito B = %d, Conceito C = %d ",
           contA, contB, contC);
    
    printf("\n\n ");
    system("pause");
}  
    
    
