#include "AutoRep.h"

AutoRep::AutoRep(string nome, int posicao) : Sala(nome, posicao, 7){}		// contrutor
AutoRep::~AutoRep(void){}			//destrutor

AutoRep::AutoRep(){}

void	AutoRep::setNivelEscudo(int nivelEscudo) { }
int		AutoRep::getNivelEscudo() { return 0; }
void	AutoRep::setNivelEscudoActual(int nivelEscudoActual) { }
int		AutoRep::getNivelEscudoActual() { return 0; }
bool	AutoRep::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string AutoRep::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}