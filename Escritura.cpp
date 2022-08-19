#include "Escritura.h"
#include "Imovel.h"
#include "Comprador.h"
#include "Financiamento.h"
#include <iostream>
#include <string>
#include <fstream>
#include <locale.h>
using namespace std;

Escritura::Escritura(){}

void Escritura::conteudoEscritura(Comprador novoComprador, Imovel novoImovel, Financiamento novoFinanciamento) {
	setlocale(LC_ALL, "Portuguese");
	this->escritura.open("Escritura.txt", ios::out); 
	this->escritura << "----------------------------ESCRITURA DE COMPRA E VENDA DE IMÓVEL----------------------------" << endl;
	this->escritura << "O presente contrato tem por finalidade a comercialização do imóvel descrito a seguir de propriedade da Maxxi Corretora.\n" << endl;
	//clausula
	this->escritura << "\n O preço avaliado do imóvel situado em " << novoImovel.getEndereco() << ", ora acertada é de R$" << novoImovel.getValorImovel() << ", por conta do qual a Maxxi Corretora confessa e declara haver recebido do COMPRADOR o valor de entrada de R$" << novoFinanciamento.getVALORENTRADA() << " no financiamento fornecido pelo " << novoFinanciamento.getBANCO() << " no total de R$" << novoFinanciamento.getFinanciado() << endl;
	this->escritura << "a título de sinal de negócio e princípio de pagamento, conforme recibo assinado pela Maxxi Corretora e que, na época do pagamento, foi entregue ao " << novoComprador.getNOME() << " e de cujo recebimento dão a mais ampla quitação." << endl;
	//cláusula
	this->escritura << "A posse do imóvel objeto deste contrato é transmitida pela Maxxi Corretora ao " << novoComprador.getNOME() << " neste ato, situação essa representada pela entrega das chaves do referido imóvel." << endl;
	//cláusula
	this->escritura << "O(a) " << novoComprador.getNOME() << " poderá ceder ou transferir os direitos que lhe decorre deste contrato, independentemente de anuência da Maxxi Corretora, ficando cedentes e cessionários solidários no cumprimento das obrigações ora ajustadas." << endl;
	//cláusula 
	this->escritura << "O presente contrato é celebrado sob a condição expressa de sua irrevogabilidade e irretratabilidade, ressalvando o eventual inadimplemento do(a) " << novoComprador.getNOME() << " renunciando os contratantes, expressamente, à faculdade de arrependimento concedida pelo art. 420 do Código Civil." << endl;
	this->escritura << "Para todos os fins de direito, os contratantes declaram aceitar o presente contrato nos expressos termos em que foi lavrado, obrigando-se a si, seus herdeiros e sucessores a bem fielmente cumpri-lo. Fica o Registro de Imóveis autorizado, mediante solicitação, a promover o registro do presente instrumento, na forma legal." << endl;
	this->escritura << "--------------------------------------------------------------------------------------------";
	cout << "Sua certificação de compra foi registrada.Obrigada por adquirir seu imóvel com a Maxxi Corretora." << endl;
}


