#pragma once
#ifndef	Maquina_H
#define Maquina_H
#include <iostream>
#include <string>
#include <vector>

#include "Sala.h"
using namespace std;

class Maquina : public Sala{
public:
	Maquina(string nome, int posicao);							//contrutor por defeito
	~Maquina(void);					//destrutor
	Maquina();

	void	setId(int id) { this->id = id; }
	int		getId() { return this->id; }
	void	setPosicao(int posicao) { this->posicao = posicao; }
	int		getPosicao() { return this->posicao; }
	void	setOxigenio(int oxigenio) { this->oxigenio = oxigenio; }
	int		getOxigenio() { return this->oxigenio; }
	void	setIntegridade(int integridade) { this->integridade = integridade; }
	int		getIntegridade() { return this->integridade; }

	void	setBrecha(bool brecha) { this->brecha = brecha; }
	bool	getBrecha() { return this->brecha; }
	void	setFogo(bool fogo) { this->fogo = fogo; }
	bool	getFogo() { return this->fogo; }
	void	setCurtoCircuito(bool curtoCircuito) { this->curtoCircuito = curtoCircuito; }
	bool	getCurtoCircuito() { return this->curtoCircuito; }

	void	setNome(string nome) { this->nome = nome; }
	string	getNome() { return this->nome; }
	bool verificaId(string id);
	string setUnidade(Unidade *u);
	//TRETA
	void	setNivelEscudo(int nivelEscudo);
	int		getNivelEscudo();
	void	setNivelEscudoActual(int nivelEscudoActual);
	int		getNivelEscudoActual();
	vector<int> getAdjacenteSala();
	void setAdjacenteSala();

	Sala *duplica(){
		return new Maquina(*this);
	}
};


#endif