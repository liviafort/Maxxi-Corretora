#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>

using namespace std;

class Imovel {
private:
    // Atributos de valores adicionais no valor do metro�
    double valorQuarto;
    double valorBanheiro;
    double valorVaga;

public:
    //Atributos p�blicos
    int areaConstruida;
    int qntQuartos;
    int qntBanheiros;
    int qntVagas;
    double valor; //valor do m�
    string endereco;

    //Construtor
    Imovel(int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valor, string _endereco);

    //Metodos
    double valorImovel(); //Polimorfismo
};

#endif 

