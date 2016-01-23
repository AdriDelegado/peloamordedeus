#include "Red.h"
#include "Sala.h"
Red::Red(string id, Sala *s) : Unidade(5, 1, 1, true, 0, true, 0, "Camisa Vermelha", id, s){

}

Red::~Red(){}

int Red::reparaIntegridade(){
	//verificar se a sala em que o RED esta é um dos propulsores
	
	if (s->getId() == 0) //ver se e propulsor
		return 0;

	else if(s->getIntegridade() < 100){
		int newIntegridade = s->getIntegridade() + this->getReparador();
		if (newIntegridade>100){
			newIntegridade = 100 - s->getIntegridade();
			s->setIntegridade(100);
			return newIntegridade;
		}
		else{
			s->setIntegridade(newIntegridade);
			return this->getReparador();
		}
	}
	else{
		return 0;
	}
	
}

void Red::respira(){

	if (s->getOxigenio() > 0)
	{
		int newOxigenio = s->getOxigenio() - 1;
		s->setOxigenio(newOxigenio);
	}
	else
	{
		int newHp = getHp() - 1;
		setHp(newHp);
	}
}