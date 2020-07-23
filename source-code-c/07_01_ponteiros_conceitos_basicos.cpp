/* Este programa tem o objetivo de explorar Apontadores e os operadores  * e & */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *apont_var, var; /* var eh uma variável que armazena um inteiro.
                            apont_var é uma variável ponteiro ou apontador que armazena
                            o endereço de uma variavel do tipo inteiro */
    
    var = 18;
    apont_var = &var;
    
    printf("Este programa ilustra conceitos de  Apontadores e os operadores  * e &\n\n");
    
    printf("O conteudo de var eh 18 e apont_var aponta para o endereco de var\n\n");
    
    
    printf("referencia direta a var (conteudo de var):                   var = %d\n", var);
    printf("referencia indireta a var (conteudo apontado por apont_var): *apont_var = %d\n\n", *apont_var);
    printf("endereco de var em decimal (%%d):     &var = %d\n", &var);
    printf("endereco de var em hexadecimal (%%p): &var = %p\n\n", &var);
    printf("conteudo de apont_var em decimal     (%%d): apont_var = %d\n", apont_var); 
    printf("conteudo de apont_var em hexadecimal (%%p): apont_var = %p\n\n", apont_var); 
    printf("endereco de apont_var em decimal     (%%d): &apont_var = %d\n", &apont_var);
    printf("endereco de apont_var em hexadecimal (%%p): &apont_var = %p\n\n", &apont_var);    
    printf("conteudo do endereco de apont_var           (em %%d): *&apont_var = %d\n", *&apont_var);       
    printf("endereco do conteudo apontado por apont_var (em %%d): &*apont_var = %d\n\n", &*apont_var);
                    
    printf("\n\n");
    system("pause");
    return 0;
}

