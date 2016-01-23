#include "SuppVida.h"

SuppVida::SuppVida(string nome, int posicao) : Sala(nome, posicao, 5){}		// contrutor
SuppVida::~SuppVida(void){}			//destrutor

SuppVida::SuppVida(){}

void	SuppVida::setNivelEscudo(int nivelEscudo) { }
int		SuppVida::getNivelEscudo() { return 0; }
void	SuppVida::setNivelEscudoActual(int nivelEscudoActual) { }
int		SuppVida::getNivelEscudoActual() { return 0; }
bool	SuppVida::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string SuppVida::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}