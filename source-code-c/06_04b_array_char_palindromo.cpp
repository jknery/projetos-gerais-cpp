/****************************************************************************
 *  Programa que lê um string (array de caracteres), imprime o string       *
 *  lida, o tamanho da string e os caracteres separados por espaço          *                                         *
 ****************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define TAM_MAX 20

int tamanho_string(char []);
void separa_caracteres (char[]);
int eh_palindromo(char []);

int main() {
    char string[TAM_MAX];

    printf("Digite uma cadeia de caracteres sem espacos em branco(encerra com <enter>):\n ");  
    scanf("%s", string);
    /* pode ser usada a função gets(string). Essa função lê todo o  
       string incluindo espaços em branco e encerra a leitura com <enter>: */
    printf("\nA cadeia de caracteres lida foi: %s\n ", string);       
    printf("\nTotal de caracteres = %d\n", tamanho_string(string));
    printf("\nOs caracteres sao:\n");
    separa_caracteres(string);
    
    /* determina se o string lido eh um palíndromo */
    if (eh_palindromo(string))  
        printf("\n\n%s eh um palindromo!", string); 
    else 
        printf("\n\n%s nao eh um palindromo!", string); 

    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}    


int tamanho_string(char s[]) {     /* s é o string recebido */
    int indice;

     /* '\0' é o caractere NULL. Ele indica o fim do string */
    for (indice = 0; s[indice] != '\0'; indice++);   
    
    return indice;
}

void separa_caracteres(char s[]) {     /* s é o string recebido */
    int indice;

     /* '\0' é o caractere NULL. Ele indica o fim do string */
    for (indice = 0; s[indice] != '\0'; indice++)
        printf("%c  ", s[indice]);
    
    return;
} 

int eh_palindromo(char s[]) {
    int inicio, fim;
       
    fim = tamanho_string(s) - 1;
    for (inicio = 0; inicio < fim; inicio++, fim--)
        if (s[inicio] != s[fim])
            return 0;

    return 1;
}    
