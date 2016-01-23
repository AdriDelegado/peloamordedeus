#include "Maquina.h"
Maquina::Maquina(string nome, int posicao) : Sala(nome, posicao, 2){	}	//contrutor

Maquina::Maquina(){}
Maquina::~Maquina(void){}					//destrutor

void	Maquina::setNivelEscudo(int nivelEscudo) { }
int		Maquina::getNivelEscudo() { return 0; }
void	Maquina::setNivelEscudoActual(int nivelEscudoActual) { }
int		Maquina::getNivelEscudoActual() { return 0; }
bool Maquina::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Maquina::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}