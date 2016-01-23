#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
//#include "nave.h"
#include "Consola.h"
#include "UserInterface.h"
using namespace std;

void menuPrincipal();
void creditos();
int settings();
//void iniciarJogo();

int main(){
	menuPrincipal();
	return 0;
}

void menuPrincipal(){
	Consola c;
	int dificuldade = 0; //valor para agarrar a dificuldade seleccionada, deve ser preciso meter em kel classe
	c.setScreenSize(400, 400);
	c.setTextSize(20, 20);
	c.setTextColor(c.AZUL_CLARO);
	c.setBackgroundColor(c.PRETO);
	c.gotoxy(10, 10);
	cout << "INICIAR";
	c.gotoxy(10, 11);
	cout << "SETTINGS";
	c.gotoxy(10, 12);
	cout << "CREDITS" << endl;

	char tecla;

	int x = 7, y = 10;
	c.gotoxy(x, y);
	cout << '>';
	while (1) {
		tecla = c.getch();
		if (tecla == c.ENTER){
			if (y == 10){
				c.clrscr();			//limpa o ecra
				UserInterface jogar;
				jogar.novoJogo(dificuldade);

			}
			if (y == 11){
				c.clrscr();
				dificuldade = settings();
				menuPrincipal();
			}
			if (y == 12){
				c.clrscr();			//limpa o ecra
				creditos();
			}

		}
		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

		c.gotoxy(x, y);
		cout << ' ';

		if (tecla == c.CIMA){
			y--;
			if (y == 9){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 12;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				c.gotoxy(x, y);
				cout << '>';
			}
		}
		if (tecla == c.BAIXO){
			y++;
			if (y == 13){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 10;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				c.gotoxy(x, y);
				cout << '>';
			}
		}
	}


}

void creditos(){
	Consola c;
	char tecla;


	c.gotoxy(10, 10);
	cout << "CREDITS";
	c.gotoxy(10, 12);
	cout << "NOME: ADRIEL NICOLAU";
	c.gotoxy(10, 13);
	cout << "NUM_ALUNO: 21200802";

	c.gotoxy(10, 16);
	cout << "NOME: NUNO CURADO";
	c.gotoxy(10, 17);
	cout << "NUM_ALUNO: 21210595";

	c.gotoxy(10, 19);
	cout << "PRIMA ESC PARA VOLTAR";

	while (1){
		tecla = c.getch();
		if (tecla == c.ESCAPE){
			c.clrscr();
			menuPrincipal();

		}
	}

}

int settings()
{
	Consola c;
	char tecla;
	int dificuldade;

	c.gotoxy(10, 10);
	cout << "DIFICULDADE:";
	c.gotoxy(30, 10);
	cout << "EASY";
	c.gotoxy(40, 10);
	cout << "NORMAL";
	c.gotoxy(50, 10);
	cout << "HARD" << endl;
	c.gotoxy(10, 12);
	cout << "MUSICA:";
	c.gotoxy(30, 12);
	cout << "ON";
	c.gotoxy(40, 12);
	cout << "OFF";
	c.gotoxy(10, 15);
	cout << "PRIMA ESC PARA VOLTAR";
	int x = 7, y = 10;
	c.gotoxy(x, y);
	cout << '>';

	while (1)
	{

		tecla = c.getch();
		if (tecla == c.ESCAPE)
		{
			c.clrscr();
			menuPrincipal();

		}
		if (tecla == c.ENTER)
		{

			if (y == 10)
			{
				c.gotoxy(x, y);
				cout << ' ';
				x = 27;
				y = 10;
				c.gotoxy(x, y);
				cout << ">";
				while (1)
				{
					tecla = c.getch();
					c.gotoxy(x, y);
					cout << ' ';
					if (tecla == c.ENTER)
					{
						if (x == 27)
						{
							cout << ' ';
							dificuldade = 1;
							x = 7;
							c.gotoxy(x, y); break;
						}

						if (x == 37)
						{
							cout << ' ';
							dificuldade = 2;
							x = 7;
							c.gotoxy(x, y); break;
						}

						if (x == 47)
						{
							cout << ' ';
							dificuldade = 3;
							x = 7;
							c.gotoxy(x, y); break;

						}
					}

					if (tecla == c.DIREITA)
					{
						if (x == 47)
						{
							x = 27;
							c.gotoxy(x, y);
							cout << ">";
						}
						else
						{

							x = x + 10;
							c.gotoxy(x, y);
							cout << ">";
						}

					}
					if (tecla == c.ESQUERDA)
					{
						if (x == 27)
						{
							x = 47;
							c.gotoxy(x, y);
							cout << ">";
						}
						else
						{
							x = x - 10;
							c.gotoxy(x, y);
							cout << ">";
						}
					}


				}

			}
			if (y == 12)
			{
				c.gotoxy(x, y);
				cout << ' ';
				x = 27;
				y = 12;
				c.gotoxy(x, y);
				cout << ">";
				while (1)
				{

					tecla = c.getch();
					c.gotoxy(x, y);
					cout << ' ';
					if (tecla == c.ENTER)
					{
						if (x == 27)
						{
							cout << ' ';
							//musica on;
							x = 7;
							c.gotoxy(x, y);
							cout << ">";
							break;
						}
						if (x == 37)
						{
							cout << ' ';
							//musica off
							x = 7;
							c.gotoxy(x, y);
							cout << ">";
							break;
						}
					}

					if (tecla == c.DIREITA)
					{
						if (x == 37)
						{
							c.gotoxy(x, y);
							cout << ' ';
							x = 27;
							c.gotoxy(x, y);
							cout << ">";
						}
						else
						{
							c.gotoxy(x, y);
							cout << ' ';
							x = x + 10;
							c.gotoxy(x, y);
							cout << ">";
						}

					}
					if (tecla == c.ESQUERDA)
					{
						if (x == 27)
						{
							c.gotoxy(x, y);
							cout << ' ';
							x = 37;
							c.gotoxy(x, y);
							cout << ">";
						}
						else
						{
							c.gotoxy(x, y);
							cout << ' ';
							x = x - 10;
							c.gotoxy(x, y);
							cout << ">";
						}
					}
				}

			}

		}
		if ((tecla != c.ESQUERDA) && (tecla != c.DIREITA) &&
			(tecla != c.CIMA) && (tecla != c.BAIXO)) continue;

		c.gotoxy(x, y);
		cout << ' ';

		if (tecla == c.CIMA){
			if (y == 10){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 12;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				y = 10;
				c.gotoxy(x, y);
				cout << '>';
			}
		}
		if (tecla == c.BAIXO)
		{
			if (y == 12){				// verfica a posiçaão do ">" para qeu nao exeda o limite desejado
				y = 10;
				c.gotoxy(x, y);
				cout << '>';
			}
			else{
				y = 12;
				c.gotoxy(x, y);
				cout << '>';
			}
		}
	}
	return dificuldade;
}