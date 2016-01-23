#include "Unidade.h"
#include "Sala.h"

//CONSTRUTOR PARA OS TRIPULANTES
Unidade::Unidade(int hp, int reparador, int combatente, bool operador, int exoesqueleto, bool respira, string nome, string id, Sala *s){
	this->hp = hp;
	this->nome = nome;

	this->s = s->duplica();
	this->id = id;
	this->reparador = reparador;
	this->combatente = combatente;
	this->operador = operador;
	this->exoesqueleto = exoesqueleto;
	this->respira = respira;

}

//construtor para inimigos
Unidade::Unidade(int hp, bool respira, int inimigoX, int inimigoY, int move, string nome, string id, Sala *s)
{
	this->hp = hp;
	this->nome = nome;

	
	this->id = id;
	this->move = move;
	this->inimigoX = inimigoX;
	this->inimigoY = inimigoY;
	this->respira = respira;
	this->s = s->duplica();
}



Unidade::Unidade(){}
Unidade::~Unidade(void){}

void Unidade::inicioTurno(){
	reparaIntegridade();
	respiraOxigenio();


}


