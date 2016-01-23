#pragma once
#ifndef Propulsor_H
#define Propulsor_H
#include "Sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Propulsor : public Sala
{
public:
	Propulsor(string nome, int posicao);	//contrutor por defeito
	~Propulsor(void);			//destrutor
	Propulsor(void);

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
	bool	verificaId(string id);
	void	setNome(string nome) { this->nome = nome; }
	string	getNome() { return this->nome; }
	string setUnidade(Unidade *u);
	string setInimigos(Unidade *u);
	string setXenomorfos(Unidade *u);
	void	setAdjacenteSala();
	vector<int> getAdjacenteSala();
	
	//TRETA
	void	setNivelEscudo(int nivelEscudo);
	int		getNivelEscudo();
	void	setNivelEscudoActual(int nivelEscudoActual);
	int		getNivelEscudoActual();

	Sala *duplica(){
		return new Propulsor(*this);
	}
};


#endif