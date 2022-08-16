#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <string>

using namespace std;

class Casa : public Imovel {
private:
    //Atributos
    int tamTerreno;
    double precoTerreno = 580; // em m²

public:
    //Construtor
    Casa(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro, int _tamTerreno);
    //métodos
    void verificaTerreno(int _areaConstruida, int _tamTerreno);
    double valorCasa();
};

#endif
