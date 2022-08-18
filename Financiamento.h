#ifndef FINANCIAMENTO_H
#define FINANCIAMENTO_H
#include <string>
#include <iostream>

using namespace std;

class Financiamento{
private:
	//atributos
	string banco;
	double valorEntrada;
	int qantMeses;
	double taxa = 0.15;


public:
	//construtor
	Financiamento(string banco, double valorEntrada, int qantMeses);

	//métodos
	void setBANCO(string banco);
	string getBANCO();
	void setVALORENTRADA(double valorEntrada);
	double getVALORENTRADA();
	void setQANTMESES(int qantMeses);
	int getQANTMESES();
	//caso funcional
	double precoFinanciado;
	void calculoFinanciamento(double valorImovel);
	double getFinanciado();
};
#endif

