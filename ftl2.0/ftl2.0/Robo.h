#pragma once
#ifndef ROBO_H
#define ROBO_H
#include "Unidade.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Robo : public Unidade{

public:

	Robo(string id, Sala *s);
	~Robo();

	void setHp(int hp) { this->hp = hp; }
	int getHp() { return this->hp; }
	void setReparador(int reparador) { this->reparador = reparador; }
	int getReparador() { return this->reparador; }
	void setCombatente(int combatente) { this->combatente = combatente; }
	int getCombatente() { return this->combatente; }
	void setExoesqueleto(int exoesqueleto) { this->exoesqueleto = exoesqueleto; }
	int getExoesqueleto() { return this->exoesqueleto; }
	void setPosicaoSala(Sala *s) { this->s = s; }
	Sala *getPosicaoSala() { return this->s; }

	void setId(string id) { this->id = id; }
	string getId() { return this->id; }
	void setNome(string nome) { this->nome = nome; }
	string getNome() { return this->nome; }

	void setOperador(bool operador) { this->operador = operador; }
	bool getOperador() { return this->operador; }
	void setRespira(bool respira) { this->respira = respira; }
	bool getRespira() { return this->respira; }

	virtual int getInimigoX() { return 0; }
	virtual void setInimigoX(int inimigoX){}
	virtual int getInimigoY() { return 0; }
	virtual void setInimigoY(int inimigoY){}
	virtual int getMove()  { return 0; }
	virtual void setMove(int move)  {}

	int reparaIntegridade();
<<<<<<< HEAD
	void respiraOxigenio();
	void moveProb(Nave *n);

=======
	void respira();
	void move();
>>>>>>> origin/master
};

#endif