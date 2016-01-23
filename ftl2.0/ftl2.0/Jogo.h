#pragma once
#ifndef JOGO_H
#define JOGO_H
#include "Nave.h"
#include "consola.h"
#include "Sala.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include<iterator>

class Jogo{
	int dificuldade;
	int musica;
	int milhasIniciais;
	int milhasActuais;

public:
	Jogo();
	Jogo(int Ndificuldade, int Nmusica);
	~Jogo();

	//-------GET----------------------
	int getDificuldade();
	int getMusica();
	int getMilhasIniciais();
	int getMilhasActuais();
	void calculaMilhasIniciais(int Ndificuldade);
	void calculaMilhasActual(int propD, int propE);
	bool VerificaFimJogo(Nave *s); //se for true o jogo acaba
	bool VerificaNaveAnda(Nave *n, Sala *sMaquina); //se for false nave nao anda
	//-------SET---------------------

	void setDificuldade(int Ndificuldade);
	void setMusica(int Nmusica);
	void setMilhasIniciais(int NmilhasIniciais);
	void setMilhasActuais(int nMilhasActuais);

	void repararIntegridade(Nave *n);
	void eventoCampoPoCosmico(Nave *n);
	void eventos(Nave *n);
};

#endif