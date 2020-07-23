#include "login.h"

int main()
{
	setlocale(LC_ALL, "");

	int OPCAO;
	char R;

	USUARIO loginTeste;

	do
	{
		do
		{
			system("cls");
			cout << "PROGRAMA TESTE DE CADASTRO E EXCLUSÃO DE USUÁRIOS" << endl;
			cout << "1 - CADASTRAR" << endl;
			cout << "2 - LISTAR   " << endl;
			cout << "3 - EXCLUIR  " << endl;
			cout << "4 - SAIR     " << endl;
			cout << "DIGITE A OPÇÃO: ";
			cin  >> OPCAO;
		}
		while(OPCAO > 4 || OPCAO < 1);

		switch(OPCAO)
		{
		case 1:
			loginTeste.setNome();
			loginTeste.setSenha();
			loginTeste.setNivel();
			loginTeste.GravaDados();
			break;

		case 2:
			loginTeste.ListaDados();
			break;

		case 3:
			loginTeste.ExcluiDados();
			break;
		
		case 4:
			system("exit");
			break;
		}

		cout << "DESEJA FAZER MAIS ALGUMA OPERAÇÃO? ";
		cin  >> R;

	}
	while(toupper(R) == 'S');

	return 0;
}
