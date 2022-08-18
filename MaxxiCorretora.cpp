#include <iostream>
#include <string>
#include "Escritura.h"
#include "Apartamento.h"
#include "Casa.h"
#include "Imovel.h"
#include "Financiamento.h"
#include "Comprador.h"
#include <locale.h>
using namespace std;


int retornoDeSaida(int escolhaVoltarInicio) {
    cout << "\n-----Escolha n�o encontrada, caso deseje come�ar de novo digite 1.-----" << endl;
    cin >> escolhaVoltarInicio;
    return escolhaVoltarInicio;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int escolhaVoltarInicio = 1;
    while (escolhaVoltarInicio != 0) {

        //atributos necess�rios do cliente para os objetos
        string endereco;
        int escolhaTipoImovel, areaConstruida, qntQuartos, qntBanheiros, qntVagas;

        //escolha do im�vel
        cout << "-----Bem vindo � Maxxi Corretora.-----" << endl;
        cout << "Por favor, escolha um dos tipos de im�vel" << endl;
        cout << "1 - Casa" << endl;
        cout << "2 - Apartamento\n> ";
        cin >> escolhaTipoImovel;

        //condi��o para receber atributos gerais
        if (escolhaTipoImovel == 1 || escolhaTipoImovel == 2) {
            cout << "\n-----Digite as seguintes informa��es do im�vel para dar continuidade-----" << endl;
            cout << "Endere�o desejado: ";
            cin.ignore();
            getline(cin, endereco);
            cout << "�rea do im�vel desejada: ";
            cin >> areaConstruida;
            cout << "Quantidade de quartos desejada: ";
            cin >> qntQuartos;
            cout << "Quantidade de banheiros desejada: ";
            cin >> qntBanheiros;
            cout << "Quantidade de vagas desejada: ";
            cin >> qntVagas;
            cout << "-----As informa��es foram processadas-----" << endl;
        }
        else {
            escolhaVoltarInicio = retornoDeSaida(escolhaVoltarInicio);
            if (escolhaVoltarInicio == 1) {
                continue;
            }
            else {
                break;
            }
        }

        //atributos e cria��o do comprador
        string nome, rg, cpf;
        cout << "\n-----Digite suas informa��es pessoais para dar continuidade-----" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "RG: ";
        getline(cin, rg);
        cout << "CPF: ";
        getline(cin, cpf);
        cout << "-----As informa��es foram processadas-----\n" << endl;
        Comprador comprador1 = Comprador(nome, rg, cpf);

        //condi��es de cria��o de objeto
        if (escolhaTipoImovel == 1) {
            int tamanhoTerreno;
            cout << "Digite o tamanho do terreno\n> ";
            cin >> tamanhoTerreno;
            if (tamanhoTerreno > areaConstruida) {
                Casa casa1 = Casa(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas, tamanhoTerreno);
                Imovel imovel1 = Imovel(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas);
                imovel1.valorImovel(casa1.valorCasa());
                //cria��o do objeto financiamento
                Financiamento financiamento1 = imovel1.criaObjetoFinanciamento(imovel1);
                //cria��o da escritura;
                Escritura escritura1 = Escritura();
                escritura1.conteudoEscritura(comprador1, imovel1, financiamento1);
                break;
            }
            else {
                escolhaVoltarInicio = retornoDeSaida(escolhaVoltarInicio);
                if (escolhaVoltarInicio == 1) {
                    continue;
                }
                else {
                    break;
                }
            }
        }
        else {
            int andar, cobertura;
            cout << "Digite o andar do pr�dio que deseja que seu im�vel esteja (n�mero): ";
            cin >> andar;
            cout << "Digite 1 se deseja cobertura no pr�dio ou 0 caso n�o queira: ";
            cin >> cobertura;
            if (cobertura>1 || cobertura<0) {
                cobertura = retornoDeSaida(cobertura);
                if (cobertura == 1) {
                    continue;
                }
                else {
                    break;
                }
            }
            else{
                if (andar > 0) {
                    Apartamento apartamento1 = Apartamento(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas, andar, cobertura);
                    Imovel imovel1 = Imovel(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas);
                    imovel1.valorImovel(apartamento1.valorApartamento());
                    //cria��o do objeto financiamento
                    Financiamento financiamento1 = imovel1.criaObjetoFinanciamento(imovel1);
                    //cria��o da escritura;
                    Escritura escritura1 = Escritura();
                    escritura1.conteudoEscritura(comprador1, imovel1, financiamento1);
                    break;
                }
                else {
                    escolhaVoltarInicio = retornoDeSaida(escolhaVoltarInicio);
                    if (escolhaVoltarInicio == 1) {
                        continue;
                    }
                    else {
                        break;
                    }
                }
            }

        }
        return 0;
    }
}