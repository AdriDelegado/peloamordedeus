#pragma once
#ifndef SpaceShip_H
#define SpaceShip_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Sala;
class Unidade;
class Nave{
protected:
	string nome;
	vector <Sala *> salas;
	vector <Unidade *> ocupantes;
public:
	Nave();
	~Nave(void);


	bool	verifacaOperadorPonte();
	bool	verifaIntegridade();

	int		getNivelTotalPropulsao();

	void	setNome(string nome){ this->nome = nome; }
	void	setOcupantes(Unidade *t);

	string	getNome(){ return this->nome; }
	string	setSalas(Sala *s);
	string	setUnidade(Unidade *u);

	vector	<Unidade *> getOcupantes();
	vector	<Sala *> getSalas();
	

	string criaSala(int v, int p, string nome);

private:
	bool verificaPosicao(int posicao);
	bool verificaUnidadeExiste(string id);
};


#endif
