#include "UserInterface.h"


UserInterface::UserInterface(void){	this->turno = 0; }
UserInterface::~UserInterface(void){}

void UserInterface::novoJogo(int dificuldade){
	//comando ordem; //verificar se vamos ter comandos para alem de andar de Sala em Sala 
	setCache2(1);

	//	nave SpaceShip;		//aqui ja tem as Salas
	
	jogo.setDificuldade(dificuldade);
	jogo.calculaMilhasIniciais(dificuldade);
	jogo.setMilhasActuais(0);


	c.setTextColor(c.VERDE);
	c.setBackgroundColor(c.PRETO);

	this->fazDesenhos();
	this->setUpNave();



//	limpaComando(1);

	c.gotoxy(6, 24); // posic�ao da info para introzur
	cout << "Introduza Comando";
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos


	while (1)
	{

//		limpaComando(0);

		string comando;

		getline(cin, comando);

//		separaComando(comando, comObj);
	//	verificaComando(comObj, n);



		//	if(flag==0)
		//PlaySound(TEXT("..\\SOUNDS\\GOT.WAV"), NULL, SND_ASYNC | SND_LOOP);




	}
}

void UserInterface::fazDesenhos(){
	Desenho desenhos;
	desenhos.DesenhoLimitesComandos();
	desenhos.DesenhoLimitesInfo();
	desenhos.DesenhoLimitesNave();
	desenhos.DesenhoPortas();
	desenhos.DesenhoSala();
}

void UserInterface::setUpNave(){
	
	setSalasUtilizador();  // fun�ao para o utilizador por as Salas

	//setTripulantesUtilizador();
	
}



void UserInterface::setSalasUtilizador(){
	int pos;
	string comando;
	c.gotoxy(6, 24); // posic�ao da info para introzur
	cout << "Introduza Salas";
	int flag = 0;
	

	for (int i = 0; i < 6; i++){

		cursorSetSala();
		c.setBackgroundColor(c.PRETO);
		c.setTextColor(c.AZUL);
		c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
		pos = veirifaPosica(this->x, this->y);
			
		if (flag == 0){
			getline(cin, comando);
			separaComando(comando, comObj, pos);
			verificaComando(comObj);
			limpaComando(0);
		}
		else{
			i--;
			flag = 0;
		}
	}
}



//COMANDOS STUFF
void UserInterface::separaComando(string & comando, Comando & comObj, int pos)
{
	int i = 0;
	locale loc;
	
	for (std::string::size_type i = 0; i<comando.length(); ++i) //
		std::cout << std::toupper(comando[i], loc);            // POE TUDO EM UPPERCASE

	istringstream iss(comando);
	
	comObj.setPos(pos);
	do
	{
		string sub;
		iss >> sub;

		if (i == 0)
			comObj.setArg1(sub);
		else if (i == 1)
			comObj.setArg2(sub);
		else if (i == 2)
			comObj.setArg3(sub);
		else if (i == 3)
			comObj.setArg4(sub);

		i++;
	} while (iss);


}
void UserInterface::limpaCampoInformacao(){
	for (int i = 4; i < 20; i++){
		c.gotoxy(84, i); // posic�ao da introdu�ao dos camandos
		cout << "                                        ";
	}
	Desenho d;

	d.DesenhoLimitesInfo();
}
void UserInterface::limpaComando(int v){
	if (v == 1){
		c.gotoxy(6, 24); // posic�ao da introdu�ao dos camandos
		cout << "                                               ";
	}
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
	cout << "                                               ";
	c.gotoxy(6, 25); // posic�ao da introdu�ao dos camandos
}

void UserInterface::verificaComando(Comando &comObj)
{

	Desenho escreve;
	limpaCampoInformacao();
	c.setTextColor(c.VERDE);
	if (comObj.getArg1() == "SET"){
		if (comObj.getArg2() == "RED"){
			//return 1;
		}
		else if (comObj.getArg2() == "CAPITAO"){
			//return 2;
		}
		else if (comObj.getArg2() == "ROBO"){
			//return 3;
		}
		else if (comObj.getArg2() == "BELICHE"){
			//CRIA SALA ENVIA UM VALOR PRA A FUNCAO QUE VAI TAR NA NAVE
			string msg = n.criaSala(1, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;

		}
		else if (comObj.getArg2() == "PROPULSOR"){
			string msg = n.criaSala(2, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}else if(comObj.getArg2()== "ARMAS"){
			string msg = n.criaSala(7, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}
		else if (comObj.getArg2() == "AUTOREP"){
			string msg = n.criaSala(4, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}
		else if (comObj.getArg2() == "CAPALOJ"){
			string msg = n.criaSala(8, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}
		else if (comObj.getArg2() == "ENFERMARIA"){
			string msg = n.criaSala(6, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}
		else if (comObj.getArg2() == "OFICINA"){
			string msg = n.criaSala(9, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}
		else if (comObj.getArg2() == "RAIOLASER"){
			string msg = n.criaSala(3, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}
		else if (comObj.getArg2() == "SEGURANCA"){
			string msg = n.criaSala(5, comObj.getPos(), comObj.getArg2());
			escreve.escreveNomeSala(comObj.getArg2(), comObj.getPos());
			c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
			cout << msg;
		}

	}
	else if (comObj.getArg1() == "MOVE"){
		//arg2 == o id da unidade 
		//arg3 == destino
	}

		
		////else if (comObj.getArg1() == "move"){
		////	for (int i = 0; i != apolo1.getTripulacao().size(); i++){
		////		if (comObj.getArg2() == apolo1.getTripulacao().at(i)->getId()){
		////			if (atoi(comObj.getArg3().c_str()) >= 1 && atoi(comObj.getArg3().c_str()) <= 12){


		////				escreve.desenhaTripulante(comObj.getArg2(), atoi(comObj.getArg3().c_str()), apolo1.getTripulacao().at(i)->getIdSala());
		////				apolo1.getTripulacao().at(i)->setIdSala(atoi(comObj.getArg3().c_str()));
		////				mostrar no iforma��o de onde saiu e para onde foi o tripulante
		////			}
		////		}
		////	}
		////}
		////else if (comObj.getArg1() == "go"){
		////	if (jogo.VerificaNaveAnda(apolo1) == true){

		////		Propulsor *pE = (Propulsor*)apolo1.getRooms().at(0);
		////		Propulsor *pD = (Propulsor*)apolo1.getRooms().at(5);

		////		jogo.calculaMilhasActual(pD->getNivelPropulsor(), pE->getNivelPropulsor());


		////		jogo.repararIntegridade(apolo1);
		////		this->setTurno(this->getTurno() + 1);
		////		if (getTurno() == 1 || getTurno() == 5 * getCache2()){
		////			jogo.eventos(apolo1);
		////			setCache2(getCache2() + 1);
		////		}

		////	}
		////	else{
		////		c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
		////		cout << "Verificar Integridade:";
		////		c.gotoxy(84, 5); // posic�ao da introdu�ao dos camandos
		////		cout << "sala das maquinas" << "propulsores";
		////		c.gotoxy(84, 6); // posic�ao da introdu�ao dos camandos
		////		cout << "verificar tripulante na PONTE";
		////	}

		////}
		////else if (comObj.getArg1() == "help"){
		////	escreve.escreveComandos();

		////}
		////else if (comObj.getArg1() == "id"){
		////	showID(apolo1);
		////}
		////else{
		////	c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
		////	cout << "comando introduzido nao valido";
		////}
		////if (jogo.VerificaFimJogo(apolo1) == true){
		////	c.gotoxy(84, 4); // posic�ao da introdu�ao dos camandos
		////	cout << "fim Jogo";
		////	exit(0);
		////}
	
}


//CURSOR STUFF

void UserInterface::cursorSetSala()
{
	c.setTextColor(c.PRETO);
	c.setBackgroundColor(c.BRANCO);
	char tecla;

	int x = 27, y = 5;
	c.gotoxy(x, y);
	cout << '>';

	while (1) {
		tecla = c.getch();
		if (tecla == c.ENTER){
			c.setTextColor(c.BRANCO);
			c.gotoxy(x, y);
			cout << (char)219;

			this->setX(x);
			this->setY(y);
			break;
		}

		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

		c.setBackgroundColor(c.BRANCO);
		c.setTextColor(c.BRANCO);
		c.gotoxy(x, y);
		cout << (char)219;
		c.setTextColor(c.PRETO);

		if (tecla == c.CIMA)
		{
			if (y == 5){

				y = 17;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (y == 17){

				y = 5;
				c.gotoxy(x, y);
				cout << '>';
			}
		}

		if (tecla == c.BAIXO)
		{
			if (y == 5){

				y = 17;
				c.gotoxy(x, y);
				cout << '>';
			}
			else if (y == 17){

				y = 5;
				c.gotoxy(x, y);
				cout << '>';
			}
		}


		if (tecla == c.ESQUERDA)
		{
			if (x == 27)
			{
				x = 57;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				x = x - 15;
				c.gotoxy(x, y);
				cout << '>';
			}
		}

		if (tecla == c.DIREITA)
		{
			if (x == 57)
			{
				x = 27;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				x = x + 15;
				c.gotoxy(x, y);
				cout << '>';
			}
		}

	}
}

int UserInterface::veirifaPosica(int x, int y){
	if (x == 12 && y == 5){
		return 1;
	}
	else if (x == 27 && y == 5){
		return 2;
	}
	else if (x == 42 && y == 5){
		return 3;
	}
	else if (x == 57 && y == 5){
		return 4;
	}
	else if (x == 27 && y == 11){
		return 5;
	}
	else if (x == 42 && y == 11){
		return 6;
	}
	else if (x == 57 && y == 11){
		return 7;
	}
	else if (x == 72 && y == 11){
		return 8;
	}
	else if (x == 12 && y == 17){
		return 9;
	}
	else if (x == 27 && y == 17){
		return 10;
	}
	else if (x == 42 && y == 17){
		return 11;
	}
	else if (x == 57 && y == 17){
		return 12;
	}
	return 0;
}