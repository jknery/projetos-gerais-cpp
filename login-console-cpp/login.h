#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <fstream>
#include <queue>
#include <stack>
#include <string>
#include <cstdlib>

#define ESCAPE "##########"

using namespace std;

class USUARIO
{
	string Nome;
	string Senha;
	string Nivel;

public:
	
	USUARIO();
		
	void setNome();
	void setSenha();
	void setNivel();
	
	void GravaDados();
	void ListaDados();
	void ExcluiDados();

};


#endif
