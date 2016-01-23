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
	int xeno;
	int casulos;
	int regenerador;
	int hipnotizador;
	int mutatis;


	Sala *s;
	
	string id;
	string nome;

	bool indeciso;
	bool toxico;
	bool flamejante;
	bool misterioso;
	bool operador;
	bool respira;
public:
	
	Unidade();
	Unidade(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, string nome, string id, Sala *s); //CONSTRUTOR PARA OS TRIPULANTES
	Unidade(int hp, bool respira, int inimigoX, int inimigoY, int move, string nome, string id, Sala *s); // Construtor para inimigos

	Unidade & operator=(const Unidade & x){

		if (this == &x){
			return *this;
		}

		this->id = x.id;
		this->hp = x.hp;
		this->reparador = x.reparador;
		this->move = x.move;
		this->combatente = x.combatente;
		this->exoesqueleto = x.exoesqueleto;
		this->inimigoX = x.inimigoX;
		this->inimigoY = x.inimigoY;
		this->nome = x.nome;
		this->respira = x.respira;
		this->operador= x.operador;
		this->s = x.s->duplica;
		this->xeno = x.xeno;
		this->casulos = x.casulos;
		this->regenerador = x.regenerador;
		this->hipnotizador = x.hipnotizador;
		this->mutatis = x.mutatis;
		this->toxico = x.toxico;
		this->flamejante = x.flamejante;
		this->misterioso = x.misterioso;
		this->indeciso = x.indeciso;



		return *this;
	}
	
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
	virtual void setXeno(int xeno) = 0;
	virtual int getXeno() = 0;
	virtual void setCasulos(int casulos) = 0;
	virtual int getCasulos() = 0;
	virtual void setRegenerador(int regenerador) = 0;
	virtual int getRegenerador() = 0;
	virtual void setHipnotizador(int hipnotizador) = 0;
	virtual int getHipnotizador() = 0;
	virtual void setMutatis(int mutatis) = 0;
	virtual int getMutatis() = 0;

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
	/*virtual void flamejanteOxigenio() = 0;*/

	

};


#endif