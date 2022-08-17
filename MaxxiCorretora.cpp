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

int main() {
    setlocale(LC_ALL, "Portuguese");
    int escolhaTipoImovel, escolhaVoltarInicio = 1782;
    while (escolhaVoltarInicio!=0) {
        string endereco;
        int areaConstruida, qntQuartos, qntBanheiros, qntVagas;
        //introdução e escolha
        cout << "-----Bem vindo à Maxxi Corretora.-----" << endl;
        cout << "Por favor, escolha um dos tipos de imóvel" << endl;
        cout << "1 - Casa" << endl;
        cout << "2 - Apartamento\n> ";
        cin >> escolhaTipoImovel;
        

        //condição para receber atributos gerais
        if (escolhaTipoImovel == 1 || escolhaTipoImovel == 2) {
            cout << "\n-----Digite as seguintes informações do imóvel para dar continuidade-----" << endl;
            cout << "Endereço desejado: ";
            cin.ignore();
            getline(cin, endereco);
            cout << "Área do imóvel desejada: ";
            cin >> areaConstruida;
            cout << "Quantidade de quartos desejada: ";
            cin >> qntQuartos; 
            cout << "Quantidade de banheiros desejada: ";
            cin >> qntBanheiros;
            cout << "Quantidade de vagas desejada: ";
            cin >> qntVagas;
            cout << "-----As informações foram processadas-----" << endl;
        }
        else {
            cout << "\n-----Escolha não encontrada, caso deseje começar de novo digite 0.-----" << endl;
            cin >> escolhaVoltarInicio;
            if (escolhaVoltarInicio == 0) {
                continue;
            }
            else {
                break;
            }
        }
  
        //criação do comprador
        string nome, rg, cpf;
        cout << "\n-----Digite suas informações pessoais para dar continuidade-----" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "RG: ";
        getline(cin, rg);
        cout << "CPF: ";
        getline(cin, cpf);
        Comprador comprador1 = Comprador(nome, rg, cpf);

        //condições de criação de objeto
        if(escolhaTipoImovel == 1){
            double tamanhoTerreno;
            cout << "Digite o tamanho do terreno\n> ";
            cin >> tamanhoTerreno;
            if (tamanhoTerreno > areaConstruida) {
                Casa casa1 = Casa(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas, tamanhoTerreno);
                Imovel imovel1 = Imovel(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas);
                Escritura escritura1 = Escritura();
                Financiamento financiamento1 = Financiamento("Bradesco", 18.300, 12, 0.6);
                imovel1.valorImovel(casa1.valorCasa());
                escritura1.conteudoEscritura(comprador1, imovel1, financiamento1);
                break;
            }
            else{
                cout << "\n-----Escolha não encontrada, caso deseje começar de novo digite 0.-----" << endl;
                cin >> escolhaVoltarInicio;
                if (escolhaVoltarInicio == 0) {
                    continue;
                }
                else {
                    break;
                }
            }
       }
        else{
            int andar = 4;
            bool cobertura = true;
            //Apartamento apartamento1 = Apartamento(endereco, areaConstruida, qntQuartos, qntBanheiros, qntVagas, andar, cobertura);
        }
       
    }
    return 0;
}