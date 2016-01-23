#include "Oficina.h"

Oficina::Oficina(string nome, int posicao) : Sala(nome, posicao, 12){}		// contrutor
Oficina::~Oficina(void){}			//destrutor

Oficina::Oficina(){}

void	Oficina::setNivelEscudo(int nivelEscudo) { }
int		Oficina::getNivelEscudo() { return 0; }
void	Oficina::setNivelEscudoActual(int nivelEscudoActual) { }
int		Oficina::getNivelEscudoActual() { return 0; }

bool	Oficina::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Oficina::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}