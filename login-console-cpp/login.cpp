#include "login.h"

USUARIO::USUARIO()
{
	Nome = "NULL";
	Senha = "NULL";
	Nivel = "NULL";
}

void USUARIO::setNome()
{
	fflush(stdin);
	cout << "DIGITE O LOGIN DO USUÁRIO (MÁX 8 carcteres): ";
	getline(cin, Nome);

}

void USUARIO::setSenha()
{
	fflush(stdin);
	cout << "DIGITE A SENHA DO USUÁRIO (MÁX 8 carcteres): ";
	getline(cin, Senha);

}

void USUARIO::setNivel()
{
	fflush(stdin);
	cout << "DIGITE O NIVEL DO USUÁRIO: ADM / ATEND. / CAIXA:: ";
	getline(cin, Nivel);
}

void USUARIO::GravaDados()
{
	fstream REC;

	REC.open("Login.db", ios::in | ios::out | ios:: app);

	if(REC.is_open())
	{
		REC << ESCAPE << endl;
		REC << Nome << endl;
		REC << Senha << endl;
		REC << Nivel << endl;
	}
	REC.close();
}

void USUARIO::ListaDados()
{
	int Cont = 0, Acess = 0;

	string LINE;

	ifstream LIST;

	LIST.open("Login.db");

	if(LIST.is_open())
	{
		while(getline(LIST, LINE))
		{
			if(LINE != ESCAPE && Acess == 0)
			{
				cout << LINE << endl;
				Acess = 1;
			}

			if(LINE == ESCAPE)
			{
				++Cont;
				Acess = 0;
			}
		}

		cout << endl << "EXISTE(M) " << Cont << " USUÁRIOS CADASTRADOS!" << endl;

	}
	LIST.close();
}

void USUARIO::ExcluiDados()
{

	char R;

	int Qntd = 0, itens = 0, cont = 0;

	bool Acess = false;

	string LINE, logon;

	string manter, apagar;

	queue <string> EXIBIR;
	queue <string> APAGAR;
	queue <string> AUX;
	queue <string> TEMP;
	queue <string> MANTER;

	ifstream DEL;
	ofstream GRAVAR;

	DEL.open("Login.db");

	fflush(stdin);
	cout << "DIGITE O LOGIN A SER EXCLUIDO: ";
	getline(cin, logon);

	if(DEL.is_open())
	{
		while(getline(DEL, LINE))
		{
			if(LINE == ESCAPE)
			{
				Acess = false;
			}

			if(LINE == logon)
			{
				Acess = true;
			}
			if(LINE == logon && Acess == true)
			{
				EXIBIR.push(LINE);
				APAGAR.push(LINE);
				++Qntd;
			}
			if(LINE != ESCAPE)
			{
				if(LINE != logon && Acess == true)
				{
					EXIBIR.push(LINE);
					APAGAR.push(LINE);
				}
			}

			TEMP.push(LINE);
			AUX.push(LINE);

		}

		cout << "EXISTE(m) " << Qntd << " USUARIO(s) A SER(em) EXCLUIDO(s)!" << endl << endl;

		while(!EXIBIR.empty())
		{
			cout << EXIBIR.front() << endl;
			EXIBIR.pop();
		}

	}
	DEL.close();

	cout << endl;

	fflush(stdin);
	cout << "DESEJA EXCLUIR? ";
	cin  >> R;

	GRAVAR.open("Login.db");

	if(GRAVAR.is_open())
	{
		if(toupper(R) == 'S')
		{
			itens = APAGAR.size();

			while(!TEMP.empty())
			{
				manter = TEMP.front();

				if(!APAGAR.empty())
				{
					apagar = APAGAR.front();

					if(manter != apagar)
					{
						MANTER.push(manter);
						TEMP.pop();
					}

					if(manter == apagar)
					{
						TEMP.pop();
						APAGAR.pop();
						++cont; //
					}
				}

				else
				{
					if(cont == itens && manter == ESCAPE)
					{
						TEMP.pop();
						cont = 0;
					}

					else
					{
						MANTER.push(manter);
						TEMP.pop();
					}

				}

			}

			while(!MANTER.empty())
			{
				GRAVAR << MANTER.front() << endl;
				MANTER.pop();
				cout <<".";
			}
			GRAVAR.close();
			
			cout <<endl;
			
			if(MANTER.empty())
			{
				cout << "OPERAÇÃO REALIZADA" << endl;
			}

		}
		
		else
		{
			cout << "OPERAÇÃO NÃO REALIZADA" << endl;
		}
		
	}
	
}
