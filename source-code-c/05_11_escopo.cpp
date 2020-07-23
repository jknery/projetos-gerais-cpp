/* Exemplo de  escopo */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void a(void);       /* prot�tipo da fun��o a */
void b(void);       /* prot�tipo da fun��o a */
void c(void);       /* prot�tipo da fun��o a */

int x = 1;          /* vari�vel global. Ser� ignorada em qualquer  */
                    /* bloco que tenha uma vari�vel de nome x     */
int main() {   
    int x = 5;      /* vari�vel local para main */
    
    printf("x local no escopo externo de main() eh %d\n", x);
    {               /* inicia novo escopo para x */
        int  x = 7;
        printf("x local no escopo interno de main() eh %d\n", x);
    }               /* encerra novo escopo de x */
    
    printf("x local no escopo externo de main() eh %d\n", x);
    a();            /*a tem x local autom�tico */ 
    b();            /*b tem x local est�tico */ 
    c();            /*c usa x global */ 
    a();            /*a reinicializa x local automatico*/
    b();            /*x local est�tico conserva seu valor anterior */    
    c();            /*x global tamb�m conserva seu valor */ 
             
    printf("\nx local em main() eh %d\n", x);  
    
    printf("\n\n");
    system("pause");
    return 0;
}

void a (void)
{
    int x = 25;         /* inicializada sempre que a � chamada */
    printf(" \nx local em a eh %d depois de entrar em a\n", x); 
    x++;
    printf("x local em a eh %d antes de sair de a\n", x);  
}

void b (void)
{
    static int x = 50;         /* apenas inicializa��o est�tica primeira vez que b � chamada */
    printf("\nx local estatico eh %d ao entrar em b\n", x); 
    x++;
    printf("x local estatico eh %d ao sair de b\n", x);  
} 

void c (void)
{
    printf("\nx global eh %d ao entrar em c\n", x); 
    x *= 10;
    printf("x global eh %d ao sair de  c\n", x);  
}             
