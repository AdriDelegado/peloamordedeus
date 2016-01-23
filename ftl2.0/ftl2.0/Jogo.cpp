#include "Jogo.h"



Jogo::Jogo(){};

Jogo::Jogo(int Ndificuldade, int Nmusica)
{
	this->dificuldade = Ndificuldade;
	this->musica = Nmusica;
}

Jogo::~Jogo(){};


//--------------GET------------------

int Jogo::getDificuldade()
{
	return this->dificuldade;
}
int Jogo::getMusica()
{
	return this->musica;
}
int Jogo::getMilhasIniciais()
{
	return this->milhasIniciais;
}
int Jogo::getMilhasActuais()
{
	return this->milhasActuais;
}

void Jogo::calculaMilhasIniciais(int Ndificuldade)
{
	if (Ndificuldade == 0){
		milhasIniciais = 4000 + 1000 * 1;
	}
	else{
		milhasIniciais = 4000 + 1000 * Ndificuldade;
		setMilhasActuais(0);
	}

}

void Jogo::calculaMilhasActual(int propD, int propE)
{

	this->milhasActuais = this->milhasActuais + propD + propE;

}

bool Jogo::VerificaFimJogo(Nave *s)
{
	if (getMilhasActuais() == getMilhasIniciais()) //acaba Jogo
		return true;
	if (s->verifaIntegridade() == true){
		return true;
	}

	return false;
}

bool Jogo::VerificaNaveAnda(Nave *n,Sala *sMaquina) //verifica se a nave pode andar 
{
	if (sMaquina->getIntegridade() < 100)
		return false; //nao pode andar
	if (n->verifacaOperadorPonte() == true){
		return true;
	}
	
	return false;
}

void Jogo::repararIntegridade(Nave *n){
	n->reparaNave();
}

void Jogo::eventos(Nave *n){
	eventoCampoPoCosmico(n);

}

void Jogo::eventoCampoPoCosmico(Nave *n){
	int l = 0;
	Consola cons;
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(3, 5);
	cons.gotoxy(84, 4); // posicçao da introduçao dos camandos
	cout << "Po Cosmico";
	vector<Sala*> sAux = n->getSalas();
	int y = dist(mt);
	for (int i = 0; i < y; i++){

		uniform_int_distribution<int> dist3(0, sAux.size());
		int c = dist3(mt);
		sAux.at(c)->danificarSala(10);
		cons.gotoxy(84, 10 + l); // posicçao da introduçao dos camandos
		cout << "sala " << sAux.at(c)->getNome() << " danificada em 10 pontos";
		l++;
		
	}
}
//------------SET------------------

void Jogo::setDificuldade(int Ndificuldade){
	this->dificuldade = Ndificuldade;
}
void Jogo::setMusica(int Nmusica)
{
	this->musica = Nmusica;
}
void Jogo::setMilhasIniciais(int NmilhasIniciais)
{
	this->milhasIniciais = NmilhasIniciais;
}
void Jogo::setMilhasActuais(int NmilhasActuais)
{
	this->milhasActuais = NmilhasActuais;
}