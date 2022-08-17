#include "Casa.h"
#include "Imovel.h"
#include <string>

using namespace std;

//Construtor
Casa::Casa(std::string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, int _tamTerreno) : Imovel(_endereco, _areaConstruida, _qntQuartos, _qntBanheiros, _qntVagas) {
    this->tamTerreno = _tamTerreno;
}


double Casa::valorCasa() {
    double precoCasa = ((areaConstruida * valorMetro) + (qntQuartos * valorQuarto) + (qntBanheiros * valorBanheiro) + (qntVagas * valorVaga));
    return precoCasa;
}
