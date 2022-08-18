#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include "Financiamento.h"
#include <iostream>
using namespace std;

class Imovel {
protected:
    // Atributos de valores adicionais no valor do metro²
    double valorQuarto = 2500;
    double valorBanheiro = 8000;
    double valorVaga = 1255;
    double precoImovel;
    double valorMetro = 1652; //valor do m²
    string endereco;

public:
    //Atributos públicos
    int areaConstruida;
    int qntQuartos;
    int qntBanheiros;
    int qntVagas;

    //Construtor
    Imovel(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas);

    //Metodos
    //(Set-Get (Endereço))
    void setEndereco(string _endereco);
    string getEndereco();

    // Valor do Imovel
    void valorImovel(double valorDoImovel);
    double getValorImovel();

    //criação do objeto financiamento
    Financiamento criaObjetoFinanciamento(Imovel imovel);
};

#endif

