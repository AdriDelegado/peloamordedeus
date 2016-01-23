#pragma once
#ifndef CAPITAO_H
#define CAPITAO_H
#include <iostream>
#include <string>
#include <vector>
#include "Unidade.h"
using namespace std;

class Capitao : public Unidade{

public:

	Capitao(string id, Sala *s);
	~Capitao();

	void setHp(int hp) { this->hp = hp; }
	int getHp() { return this->hp; }
	void setReparador(int reparador) { this->reparador = reparador; }
	int getReparador() { return this->reparador; }
	void setCombatente(int combatente) { this->combatente = combatente; }
	int getCombatente() { return this->combatente; }
	void setExoesqueleto(int exoesqueleto) { this->exoesqueleto = exoesqueleto; }
	int getExoesqueleto() { return this->exoesqueleto; }
	void setPosicaoSala(Sala *s) { this->s=s; }
	Sala* getPosicaoSala() { return this->s; }

	void setId(string id) { this->id = id; }
	string getId() { return this->id; }
	void setNome(string nome) { this->nome = nome; }
	string getNome() { return this->nome; }

	void setOperador(bool operador) { this->operador = operador; }
	bool getOperador() { return this->operador; }
	void setRespira(bool respira) { this->respira = respira; }
	bool getRespira() { return this->respira; }



	int getInimigoX() { return 0; }
	void setInimigoX(int inimigoX){}
	int getInimigoY() { return 0; }
	void setInimigoY(int inimigoY){}
	int getMove()  { return 0; }
	void setMove(int move)  {}

	//FALTA CONTRUDOR POR COPIA NA CLASS UNIDADE
	/*Unidade *duplica(){
		return new Capitao(*this);
	}*/

	
	int reparaIntegridade();
	void respira();
	void move();
};

#endif