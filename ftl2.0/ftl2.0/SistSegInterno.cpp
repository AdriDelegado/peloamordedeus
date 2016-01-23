#include "SistSegInterno.h"

SistSegInterno::SistSegInterno(string nome, int posicao) : Sala(nome, posicao, 8){}		// contrutor
SistSegInterno::~SistSegInterno(void){}			//destrutor

SistSegInterno::SistSegInterno(){}

void	SistSegInterno::setNivelEscudo(int nivelEscudo) { }
int		SistSegInterno::getNivelEscudo() { return 0; }
void	SistSegInterno::setNivelEscudoActual(int nivelEscudoActual) { }
int		SistSegInterno::getNivelEscudoActual() { return 0; }
bool	SistSegInterno::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string SistSegInterno::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}