#include "Beliche.h"
Beliche::Beliche(string nome, int posicao) : Sala(nome, posicao,4){			//contrutor
	
}
Beliche::Beliche(){}
Beliche::~Beliche(void){}				//destrutor

void	Beliche::setNivelEscudo(int nivelEscudo) { }
int		Beliche::getNivelEscudo() { return 0; }
void	Beliche::setNivelEscudoActual(int nivelEscudoActual) { }
int		Beliche::getNivelEscudoActual() { return 0; }
bool Beliche::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Beliche::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}