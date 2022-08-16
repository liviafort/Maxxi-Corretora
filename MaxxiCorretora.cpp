#include <iostream>
#include <string>
#include "Escritura.h"
#include "Apartamento.h"
#include "Casa.h"
#include "Imovel.h"
#include "Financiamento.h"
#include "Comprador.h"
using namespace std;

int main() {
    //teste Comprador
    Comprador comprador1 = Comprador("Lívia", "23.534.2", "1828496-12");
    //teste Financiamento
    Financiamento financiamento1 = Financiamento("Bradesco", 18.300, 12, 0.6);
    //teste casa
    Casa casa1 = Casa("Rua Professor Vicente Lira, Campina Grande - PB, Brasil", 200, 4, 2, 4, 35, 304);
    //teste Imovel
    Imovel imovel1 = Imovel("Rua Professor Vicente Lira, Campina Grande - PB, Brasil", 200, 4, 2, 4, 35);
    //imovel1.valorImovel(casa1.valorCasa());
    //teste apartamento
    Apartamento apartamento1 = Apartamento("Rua Lenildo Soares, Sousa - PB, Brasil", 200, 4, 2, 4, 35, 8, true);
    //teste imovel 2.0
    Imovel imovel2 = Imovel("Rua Lenildo Soares, Sousa - PB, Brasil", 200, 4, 2, 4, 35);
    imovel2.valorImovel(apartamento1.valorApartamento());
    //teste Escritura
    Escritura escritura1 = Escritura();
    escritura1.conteudoEscritura(comprador1, imovel2, financiamento1);
    return 0;
}