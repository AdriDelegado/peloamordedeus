#pragma once
#ifndef	Escudo_H
#define Escudo_H
#include <iostream>
#include <string>
#include <vector>

#include "Sala.h"
using namespace std;

class Escudo : public Sala{
	int nivelEscudo;
	int nivelEscudoActual;

public:
	Escudo(string nome, int posicao);		//contrutor
	~Escudo(void);								//destrutor
	Escudo();

	void setId(int id) { this->id = id; }
	int getId() { return this->id; }
	void setPosicao(int posicao) { this->posicao = posicao; }
	int getPosicao() { return this->posicao; }
	void setOxigenio(int oxigenio) { this->oxigenio = oxigenio; }
	int getOxigenio() { return this->oxigenio; }
	void setIntegridade(int integridade) { this->integridade = integridade; }
	int getIntegridade() { return this->integridade; }

	void setNivelEscudo(int nivelEscudo) { this->nivelEscudo = nivelEscudo; }
	int getNivelEscudo() { return this->nivelEscudo; }
	void setNivelEscudoActual(int nivelEscudoActual) { this->nivelEscudoActual = nivelEscudoActual; }
	int getNivelEscudoActual() { return this->nivelEscudoActual; }


	void setBrecha(bool brecha) { this->brecha = brecha; }
	bool getBrecha() { return this->brecha; }
	void setFogo(bool fogo) { this->fogo = fogo; }
	bool getFogo() { return this->fogo; }
	void setCurtoCircuito(bool curtoCircuito) { this->curtoCircuito = curtoCircuito; }
	bool getCurtoCircuito() { return this->curtoCircuito; }
	void	setAdjacenteSala();
	vector<int> getAdjacenteSala();

	void setNome(string nome) { this->nome = nome; }
	string getNome() { return this->nome; }
	bool verificaId(string id);
	string setUnidade(Unidade *u);
	
	
	Sala *duplica(){
		return new Escudo(*this);
	}
};


#endif