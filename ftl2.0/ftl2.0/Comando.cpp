#include "Comando.h"


Comando::Comando(string arg1, string arg2, string arg3, string arg4)
{
	this->arg1 = arg1;
	this->arg2 = arg2;
	this->arg3 = arg3;
	this->arg4 = arg4;

}
Comando::Comando()
{}

string Comando::getArg1()
{
	return this->arg1;
}

string Comando::getArg2()
{
	return this->arg2;
}

string Comando::getArg3()
{
	return this->arg3;
}

string Comando::getArg4()
{
	return this->arg4;
}


void Comando::setArg1(string sub)
{
	this->arg1 = sub;
}

void Comando::setArg2(string sub)
{
	this->arg2 = sub;
}

void Comando::setArg3(string sub)
{
	this->arg3 = sub;
}

void Comando::setArg4(string sub)
{
	this->arg4 = sub;
}




Comando::~Comando(void)
{
}