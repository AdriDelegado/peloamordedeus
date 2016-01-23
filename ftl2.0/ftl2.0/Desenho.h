#pragma once
#ifndef DesenhoMAPA_H
#define DesenhoMAPA_H
#include "Consola.h"
#include <iostream>
#include <vector>
using namespace std;

class Desenho
{
	int x;
	int y;

public:
	Desenho(int x, int y);
	Desenho();
	~Desenho();

	void limpaPosicaoActual(int posA);
	void DesenhoLimitesNave();
	void DesenhoLimitesInfo();
	void DesenhoLimitesComandos();
	void DesenhoPortas();
	void DesenhoSala();
	void escreveNomeSala(string nome, int posicao);
	void desenhaTripulante(string nome, int posicao, int posA);
	void escreveComandos();

};

#endif