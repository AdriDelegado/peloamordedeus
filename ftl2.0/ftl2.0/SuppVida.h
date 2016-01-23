#pragma once
#ifndef SuppVida_H
#define SuppVida_H
#include "Sala.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SuppVida : public Sala
{
public:

	SuppVida(string nome, int posicao);				//contrutor por defeito
	~SuppVida(void);			//destrutor
	SuppVida();

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


	Sala *duplica(){
		return new SuppVida(*this);
	}
};


#endif