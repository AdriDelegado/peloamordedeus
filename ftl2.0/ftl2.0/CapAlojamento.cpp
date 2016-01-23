#include "CapAlojamento.h"

CapAlojamento::CapAlojamento(string nome, int posicao) : Sala(nome, posicao, 11){}		// contrutor
CapAlojamento::~CapAlojamento(void){}			//destrutor

CapAlojamento::CapAlojamento(){}

void	CapAlojamento::setNivelEscudo(int nivelEscudo) { }
int		CapAlojamento::getNivelEscudo() { return 0; }
void	CapAlojamento::setNivelEscudoActual(int nivelEscudoActual) { }
int		CapAlojamento::getNivelEscudoActual() { return 0; }

bool	CapAlojamento::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string CapAlojamento::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}