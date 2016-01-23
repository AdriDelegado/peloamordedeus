#include"Ponte.h"

Ponte::Ponte(string nome, int posicao) :Sala(nome, posicao,3){}			//contrutor
Ponte::~Ponte(void){}			//destrutor
Ponte::Ponte(){}

void	Ponte::setNivelEscudo(int nivelEscudo) { }
int		Ponte::getNivelEscudo() { return 0; }
void	Ponte::setNivelEscudoActual(int nivelEscudoActual) { }
int		Ponte::getNivelEscudoActual() { return 0; }
bool Ponte::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string Ponte::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}