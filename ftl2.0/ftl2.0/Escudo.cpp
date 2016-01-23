#include "Escudo.h"

Escudo::Escudo(string nome, int posicao) : Sala(nome, posicao, 1){		//contrutor
	this->nivelEscudo = 100;
	this->nivelEscudoActual = 100;

}
Escudo::Escudo(){}
Escudo::~Escudo(void){}

bool Escudo::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Escudo::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}