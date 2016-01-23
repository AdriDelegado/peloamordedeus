#include "RaioLaser.h"
RaioLaser::RaioLaser(string nome, int posicao) : Sala(nome, posicao, 6){			//contrutor

}
RaioLaser::RaioLaser(){}
RaioLaser::~RaioLaser(void){}				//destrutor

void	RaioLaser::setNivelEscudo(int nivelEscudo) { }
int		RaioLaser::getNivelEscudo() { return 0; }
void	RaioLaser::setNivelEscudoActual(int nivelEscudoActual) { }
int		RaioLaser::getNivelEscudoActual() { return 0; }
bool RaioLaser::verificaId(string id){
	for (int i = 0; i != unidades.size(); i++){

		if (unidades.at(i)->getId() == id){
			return true;
		}
	}
	return false;
}
string RaioLaser::setUnidade(Unidade *u) {
	if (u != NULL && verificaId(u->getId()) == false){
		unidades.push_back(u);
	}
	else{
		return "Unidade com ID " + u->getId() + " escolhida ja esta ocupada";
		delete(u);
	}
	return "Sala " + u->getNome() + " introduzida com Sucasso";
}