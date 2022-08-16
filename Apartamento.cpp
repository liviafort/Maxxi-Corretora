#include "Imovel.h"
#include "Apartamento.h"
#include <string>
using namespace std;

Apartamento::Apartamento(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double valorMetro, int _andar, int _cobertura) : Imovel( _endereco, _areaConstruida, _qntQuartos,_qntBanheiros, _qntVagas, valorMetro) {
    this->andar = _andar;
    this->cobertura = _cobertura;
}

double Apartamento::valorApartamento() {
    double precoApartamento;
    if (cobertura == true) {
        precoApartamento = ((areaConstruida * valorMetro) + (qntQuartos * valorQuarto) + (qntBanheiros * valorBanheiro) + (qntVagas * valorVaga)) + (this->andar * this->precoCobertura);
    }
    else {
        precoApartamento = ((areaConstruida * valorMetro) + (qntQuartos * valorQuarto) + (qntBanheiros * valorBanheiro) + (qntVagas * valorVaga));
    }
    return precoApartamento;
}
