#include "Inimigos.h"
#include "Sala.h"
#include "Nave.h"


Inimigos::Inimigos(string id, Sala *s) : Unidade(4, true, 1, 2, 15, true, 0, "Pirata", id, s){

}


Inimigos::~Inimigos(){}



void Inimigos::respiraOxigenio(){

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

void Inimigos::moveProb(Nave *n)
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(1, 100);
	int c = dist(mt);

	if (c <= 15)
	{
		uniform_int_distribution<int> dist(1, s->getAdjacenteSala().size());
		int c = dist(mt);
		int newPosicao = s->getAdjacenteSala().at(c);
		vector<Sala*>::iterator it;
		
		for (it = n->getSalas().begin(); it != n->getSalas().end(); it++)
		{
			if ((*it)->getPosicao() == newPosicao)
			{
				for (int i = 0; i != s->getUnidades().size(); i++)
				{
					if (s->getUnidades().at(i)->getId() == this->getId())
					{
						s->getUnidades().erase(s->getUnidades().begin() + i);
					}
				}
				(*it)->setUnidade(this);
			}
		}
	}
}