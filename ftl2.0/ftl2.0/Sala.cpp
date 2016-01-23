#include "Sala.h"

Sala::Sala(string nome, int posicao, int id){
	this->id;
	this->posicao = posicao;
	this->oxigenio = 100;
	this->integridade = 100;

	this->brecha = false;
	this->fogo = false;
	this->curtoCircuito = false;

	this->nome= nome;
}

Sala::Sala(const Sala &x){
	id = 0;
	posicao = 0;
	oxigenio = 0;
	integridade = 0;

	brecha = false;
	fogo = false;
	curtoCircuito = false;

	nome = "default";

	*this = x;
}

Sala::Sala(){}
Sala::~Sala(void){}

vector <Unidade*> Sala::getUnidades(){
	return unidades;
}

void Sala::danificarSala(int dano){
	this->setIntegridade(this->getIntegridade() - dano);
}


		//quando uma unidade na sala X morre
//string eliminaUnidade(Unidade *u){
//	if (u != NULL){
//
//	}
//
//}