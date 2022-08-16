#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>

using namespace std;

class Imovel {
protected:
    // Atributos de valores adicionais no valor do metro�
    double valorQuarto = 2500;
    double valorBanheiro = 8000;
    double valorVaga = 1255;
    double precoImovel;
    string endereco;

public:
    //Atributos p�blicos
    int areaConstruida;
    int qntQuartos;
    int qntBanheiros;
    int qntVagas;
    double valorMetro; //valor do m�

    //Construtor
 
    Imovel(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro);

    //Metodos
    //(Set-Get (valor do Metro�))
    void setValorMetro(double _valorMetro);
    double getValorMetro();

    //(Set-Get (Endere�o))
    void setEndereco(string _endereco);
    string getEndereco();

    // Valor do Imovel
    void valorImovel(double valorDoImovel);
    double getValorImovel();
};

#endif

