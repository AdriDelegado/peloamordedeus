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


vector<int> RaioLaser::getAdjacenteSala()
{
	return this->adjacentes;
}

void RaioLaser::setAdjacenteSala()
{
	if (this->posicao == 1)
	{
		adjacentes.push_back(2);
	}
	else if (this->posicao == 2)
	{
		adjacentes.push_back(1);
		adjacentes.push_back(3);
		adjacentes.push_back(5);
	}
	else if (this->posicao == 3)
	{
		adjacentes.push_back(2);
		adjacentes.push_back(4);
		adjacentes.push_back(6);
	}
	else if (this->posicao == 4)
	{
		adjacentes.push_back(3);
		adjacentes.push_back(7);
	}
	else if (this->posicao == 5)
	{
		adjacentes.push_back(2);
		adjacentes.push_back(6);
		adjacentes.push_back(10);

	}
	else if (this->posicao == 6)
	{
		adjacentes.push_back(3);
		adjacentes.push_back(5);
		adjacentes.push_back(7);
		adjacentes.push_back(11);
	}
	else if (this->posicao == 7)
	{
		adjacentes.push_back(4);
		adjacentes.push_back(6);
		adjacentes.push_back(8);
		adjacentes.push_back(12);
	}
	else if (this->posicao == 8)
	{
		adjacentes.push_back(7);
	}
	else if (this->posicao == 9)
	{
		adjacentes.push_back(10);
	}
	else if (this->posicao == 10)
	{
		adjacentes.push_back(5);
		adjacentes.push_back(9);
		adjacentes.push_back(11);
	}
	else if (this->posicao == 11)
	{
		adjacentes.push_back(6);
		adjacentes.push_back(10);
		adjacentes.push_back(12);
	}
	else if (this->posicao == 12)
	{
		adjacentes.push_back(7);
		adjacentes.push_back(11);
	}

}