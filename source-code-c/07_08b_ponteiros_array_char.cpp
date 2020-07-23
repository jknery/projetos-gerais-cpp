/*Este programa utiliza Aritmética de Apontadores para imprimir os elementos de um array de caracteres*/

#include <stdio.h>
#include <stdlib.h>


void imprime_string_ordem_direta(char *);
char* endereco_ultimo_elemento_cadeia(char *); /* RETORNA um ponteiro para char */
void imprime_string_ordem_imversa(char *);
void transforma_em_maiusculo(char *);

int main() {
    char string[] = "cadeia de caracteres"; /* o identificador string é um APONTADOR CONST !!! */ 
    int *pont;
        
    printf("Este programa utiliza Aritmetica de Apontadores para imprimir\n"
           "os elementos de um array de caracteres:\n\n");

    printf("\n\nElementos do string na ordem direta:       ");
    imprime_string_ordem_direta(string);
             
    printf("\n\nElementos do string na ordem inversa:      ");    
    imprime_string_ordem_imversa (string);
        
    printf("\n\nElementos do string com letras maiusculas: ");       
    transforma_em_maiusculo(string);
    imprime_string_ordem_direta  (string);
                                                        
    printf("\n\n\n");   
    system("pause");
    return 0;
}

char* endereco_ultimo_elemento_cadeia(char *pont){
     
    for(; *pont != '\0'; pont++); /* repete comando vazio */
    return pont - 1; /* RETORNA um ponteiro para char */
}

void imprime_string_ordem_direta(char *pont) {

    for(; *pont != '\0'; pont++)
        printf("%c", *pont);
    return;
}

void imprime_string_ordem_imversa(char *pont) {
    char *pont_ultimo;
    
    pont_ultimo = endereco_ultimo_elemento_cadeia(pont);
      
    for(; pont_ultimo >= pont; pont_ultimo--)
        printf("%c", *pont_ultimo);
    return;
}

void transforma_em_maiusculo(char *pont) { 

    for(; *pont != '\0'; pont++)
        if (*pont >= 'a' && *pont <='z')
           *pont = *pont - 32;  /* 32 é a diferença do código ASCII  a(97) - A(65)          */
    return;                     /* Poderia ser usada a função tolowr() da biblioteca  de    */ 
}                               /* manipulação de caracteres, incluindo-se #include ,ctype. */
