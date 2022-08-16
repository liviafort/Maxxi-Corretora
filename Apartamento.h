#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"
#include <string>

using namespace std;

class Apartamento : public Imovel {
private:
    //Atributos
    double precoCobertura = 20000;
    int andar, cobertura;

public:
    //Construtor
    Apartamento(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro, int andar, int cobertura);

    //Metodos
    double valorApartamento();
};


#endif

