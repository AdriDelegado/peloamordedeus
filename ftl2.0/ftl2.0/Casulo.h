#pragma once
#ifndef CASULO_H
#define CASULO_H
#include <iostream>
#include <string>
#include <vector>
#include "Unidade.h"
using namespace std;

class Casulo : public Unidade{

public:

	Casulo(string id, Sala *s);
	~Casulo();

	void setHp(int hp) { this->hp = hp; }
	int getHp() { return this->hp; }
	void setReparador(int reparador) { this->reparador = reparador; }
	int getReparador() { return this->reparador; }
	void setCombatente(int combatente) { this->combatente = combatente; }
	int getCombatente() { return this->combatente; }
	void setExoesqueleto(int exoesqueleto) { this->exoesqueleto = exoesqueleto; }
	int getExoesqueleto() { return this->exoesqueleto; }
	void setPosicaoSala(Sala *s) { this->s = s; }
	Sala* getPosicaoSala() { return this->s; }

	void setId(string id) { this->id = id; }
	string getId() { return this->id; }
	void setNome(string nome) { this->nome = nome; }
	string getNome() { return this->nome; }

	void setOperador(bool operador) { this->operador = operador; }
	bool getOperador() { return this->operador; }
	void setRespira(bool respira) { this->respira = respira; }
	bool getRespira() { return this->respira; }

	void setXeno(int xeno) { this->xeno = xeno; }
	int getXeno() { return this->xeno; }
	void setCasulos(int casulos) { this->casulos = casulos; }
	int getCasulos() { return this->casulos; }
	void setRegenerador(int regenerador) { this->regenerador = regenerador; }
	int getRegenerador() { return this->regenerador; }
	void setHipnotizador(int hipnotizador) { this->hipnotizador = hipnotizador; }
	int getHipnotizador() { return this->hipnotizador; }
	void setMutatis(int mutatis) { this->mutatis = mutatis; }
	int getMutatis() { return this->mutatis; }

	int getInimigoX() { return 0; }
	void setInimigoX(int inimigoX){}
	int getInimigoY() { return 0; }
	void setInimigoY(int inimigoY){}
	int getMove()  { return 0; }
	void setMove(int move)  {}


	Unidade *duplica(){
		return new Casulo(*this);
	}


	int reparaIntegridade();

	void respiraOxigenio();
	void moveProb(Nave *n){}


};

#endif