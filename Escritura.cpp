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
	this->escritura.open("Escritura.txt", ios::out); 
	this->escritura << "----------------------------ESCRITURA DE COMPRA E VENDA DE IM�VEL----------------------------" << endl;
	this->escritura << "O presente contrato tem por finalidade a comercializa��o do im�vel a seguir, de propriedade da Maxxi Corretora.\n" << endl;
	this->escritura << "Endere�o do im�vel" << novoImovel.getEndereco() << endl;
	this->escritura << "N�mero de Matr�cula no Cart�rio de Registro de Im�veis : 1342" << endl;
	this->escritura << "O pre�o certo e ajustado da venda ora acertada � de R$" << novoImovel.getValorImovel() << endl;
	this->escritura << "por conta do qual a Maxxi Corretora confessa e declara haver recebido do COMPRADOR o valor de R$" << novoFinanciamento.getVALORENTRADA() << endl;
	this->escritura << "a t�tulo de sinal de neg�cio e princ�pio de pagamento, conforme recibo assinado pela Maxxi Corretora e que, na �poca do pagamento, foi entregue ao " << novoComprador.getNOME() << " e de cujo recebimento d�o a mais ampla quita��o." << endl;
	this->escritura << "A posse do im�vel objeto deste contrato � transmitida pela Maxxi Corretora ao " << novoComprador.getNOME() << " neste ato, situa��o essa representada pela entrega das chaves do referido im�vel." << endl;
	this->escritura << "O(a) " << novoComprador.getNOME() << " poder� ceder ou transferir os direitos que lhe decorre deste contrato, independentemente de anu�ncia da Maxxi Corretora, ficando cedentes e cession�rios solid�rios no cumprimento das obriga��es ora ajustadas." << endl;
	this->escritura << "O presente contrato � celebrado sob a condi��o expressa de sua irrevogabilidade e irretratabilidade, ressalvando o eventual inadimplemento do(a) " << novoComprador.getNOME() << " renunciando os contratantes, expressamente, � faculdade de arrependimento concedida pelo art. 420 do C�digo Civil." << endl;
	this->escritura << "Fica o Registro de Im�veis autorizado, mediante solicita��o, a promover o registro do presente instrumento, na forma legal." << endl;
}


