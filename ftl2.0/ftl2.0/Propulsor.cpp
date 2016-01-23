#include "Propulsor.h"

Propulsor::Propulsor(string nome, int posicao) :Sala(nome, posicao, 0){	//contrutor

}

Propulsor::Propulsor(){}
Propulsor::~Propulsor(void){}			//destrutor

void	Propulsor::setNivelEscudo(int nivelEscudo) { }
int		Propulsor::getNivelEscudo() { return 0; }
void	Propulsor::setNivelEscudoActual(int nivelEscudoActual) { }
int		Propulsor::getNivelEscudoActual() { return 0; }
bool Propulsor::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Propulsor::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}