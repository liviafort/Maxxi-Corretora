#include "Escritura.h"
#include "Imovel.h"
#include "Comprador.h"
#include "Financiamento.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Escritura::Escritura(){}


void Escritura::conteudoEscritura(Comprador novoComprador, Imovel novoImovel, Financiamento novoFinanciamento) {
	this->escritura << "----------------------------ESCRITURA DE COMPRA E VENDA DE IM�VEL----------------------------" << endl;
	this->escritura << "O presente contrato tem por finalidade a comercializa��o do im�vel descrito a seguir, de propriedade da Maxxi Construtora.\n" << endl;
	this->escritura << "Endere�o do im�vel" << novoImovel.getEndereco() << endl;
	this->escritura << "N�mero de Matr�cula no Cart�rio de Registro de Im�veis : 1342" << endl;
}

void Escritura::criarEscritura() {
	this->escritura.open("Escritura.txt", ios::out);
}


