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
	return "Sala " + u->getNome() + " introduzida com Sucesso";
}

vector<int> AutoRep::getAdjacenteSala()
{
	return this->adjacentes;
}
void AutoRep::setAdjacenteSala()
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