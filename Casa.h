#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <string>

using namespace std;

class Casa : public Imovel {
private:
    int tamTerreno;

public:
    //Construtor
    Casa(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, int _tamTerreno);
    //métodos
    double valorCasa();
};

#endif
