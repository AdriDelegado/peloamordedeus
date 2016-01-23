#include "Armas.h"

Armas::Armas(string nome, int posicao) : Sala(nome, posicao, 10){}		// contrutor
Armas::~Armas(void){}			//destrutor

Armas::Armas(){}

void	Armas::setNivelEscudo(int nivelEscudo) { }
int		Armas::getNivelEscudo() { return 0; }
void	Armas::setNivelEscudoActual(int nivelEscudoActual) { }
int		Armas::getNivelEscudoActual() { return 0; }
bool	Armas::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Armas::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}