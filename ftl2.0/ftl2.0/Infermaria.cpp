#include "Infermaria.h"

Infermaria::Infermaria(string nome, int posicao) : Sala(nome, posicao, 9){}		// contrutor
Infermaria::~Infermaria(void){}			//destrutor

Infermaria::Infermaria(){}

void	Infermaria::setNivelEscudo(int nivelEscudo) { }
int		Infermaria::getNivelEscudo() { return 0; }
void	Infermaria::setNivelEscudoActual(int nivelEscudoActual) { }
int		Infermaria::getNivelEscudoActual() { return 0; }
bool	Infermaria::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Infermaria::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}