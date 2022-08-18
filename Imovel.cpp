#include <string>
#include "Imovel.h"
#include "Financiamento.h"
using namespace std;

// Construtor
Imovel::Imovel(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas) {
    this->areaConstruida = _areaConstruida;
    this->qntQuartos = _qntQuartos;
    this->qntBanheiros = _qntBanheiros;
    this->qntVagas = _qntVagas;
    this->endereco = _endereco;
}

// Set-Get(Endereco)
void Imovel::setEndereco(string _endereco) {
    this->endereco = _endereco;
}

string Imovel::getEndereco() {
    return this->endereco;
}

void Imovel::valorImovel(double valorDoImovel) {
    this->precoImovel = valorDoImovel;
}

double Imovel::getValorImovel() {
    return this->precoImovel;
}

Financiamento Imovel::criaObjetoFinanciamento(Imovel imovel) {
    string banco;
    double valorEntrada;
    int meses;
    cout << "\n-----Digite as seguintes informações do imóvel para dar continuidade-----" << endl;
    cout << "Banco: ";
    cin.ignore();
    getline(cin, banco);
    cout << "Valor da Entrada: ";
    cin >> valorEntrada;
    cout << "Meses de parcela: ";
    cin >> meses;
    Financiamento financiamento(banco, valorEntrada, meses);
    financiamento.calculoFinanciamento(imovel.getValorImovel());
    cout << "-----As informações foram processadas-----" << endl;
    return financiamento;
}
