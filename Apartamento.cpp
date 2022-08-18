#include "Imovel.h"
#include "Apartamento.h"
#include <string>
using namespace std;

Apartamento::Apartamento(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, int _andar, int _cobertura) : Imovel( _endereco, _areaConstruida, _qntQuartos,_qntBanheiros, _qntVagas) {
    this->andar = _andar;
    this->cobertura = _cobertura;
}

double Apartamento::valorApartamento() {
    double precoApartamento;
    if (cobertura == 1) {
        precoApartamento = ((areaConstruida * valorMetro) + (qntQuartos * valorQuarto) + (qntBanheiros * valorBanheiro) + (qntVagas * valorVaga)) + (this->andar * this->precoCobertura);
    }
    else {
        precoApartamento = ((areaConstruida * valorMetro) + (qntQuartos * valorQuarto) + (qntBanheiros * valorBanheiro) + (qntVagas * valorVaga));
    }
    return precoApartamento;
}
