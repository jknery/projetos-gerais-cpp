#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    int int1, int2, int3, soma; /*declara��o de tr�s vari�veis do tipo inteiro*/
    
    cout <<"Digite o primeiro inteiro: "; /* prepara o prompt para a digita��o */
    cin >> int1; // a fun��o cin recebe a entrada do dispositivo padr�o 
                           
    cout <<"\nDigite o segundo inteiro: "; /* prepara o prompt para a digita��o */
    cin >> int2;    
    
    cout <<"\nDigite o terceiro inteiro: "; /* prepara o prompt para a digita��o */
    cin >> int3;
	 
    soma = int1 + int2 + int3;   
    
    cout <<"\nA soma eh"<< soma;
    
    cout <<"\n\n\nCalculando a soma sem o comando de atribuicao: ";
    cout <<"\n\nA soma" << int1 << "+" << int2 << "+" << int3 << " eh :"<<int1 + int2 + int3;
    
    cout <<"\n";
    system("pause");
    return 0;
}
