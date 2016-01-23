#pragma once
#ifndef UNIDADE_H
#define UNIDADE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Sala;
class Nave;
class Unidade{
protected:
	int hp;
	int reparador;
	int combatente;
	int exoesqueleto;
	int move;
	int inimigoX;
	int inimigoY;
	Sala *s;
	
	string id;
	string nome;

	bool operador;
	bool respira;
public:
	
	Unidade();
	Unidade(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, string nome, string id, Sala *s); //CONSTRUTOR PARA OS TRIPULANTES
	Unidade(int hp, bool respira, int inimigoX, int inimigoY, int move, string nome, string id, Sala *s); // Construtor para inimigos
	
	virtual ~Unidade(void);
	


	void inicioTurno();
	virtual void setHp(int hp) = 0;
	virtual int getHp() = 0;
	virtual void setReparador(int reparador) = 0;
	virtual int getReparador() = 0;
	virtual void setCombatente(int combatente) = 0;
	virtual int getCombatente() = 0;
	virtual void setExoesqueleto(int exoesqueleto) = 0;
	virtual int getExoesqueleto() = 0;
	virtual void setPosicaoSala(Sala *s) = 0;
	virtual Sala* getPosicaoSala() = 0;

	virtual void setId(string id) = 0;
	virtual string getId() = 0;
	virtual void setNome(string nome) = 0;
	virtual string getNome() = 0;

	virtual void setOperador(bool operador) = 0;
	virtual bool getOperador() = 0;
	virtual void setRespira(bool respira) = 0;
	virtual bool getRespira() = 0;

	//inimigos
	virtual int getInimigoX() = 0;
	virtual void setInimigoX(int inimigoX) = 0;
	virtual int getInimigoY() = 0;
	virtual void setInimigoY(int inimigoY) = 0;
	virtual int getMove() = 0;
	virtual void setMove(int move) = 0;
	




	//FALTA 
	
	//ataca


	virtual int reparaIntegridade()=0;

	virtual void respiraOxigenio()=0;
	virtual void moveProb(Nave *n) = 0;

};


#endif