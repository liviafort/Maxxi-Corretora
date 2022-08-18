#include "Financiamento.h"
#include <iostream>
#include <string>
using namespace std;

Financiamento::Financiamento(string banco, double valorEntrada, int qantMeses) {
	this->banco = banco;
	this->valorEntrada = valorEntrada;
	this->qantMeses = qantMeses;
}

void Financiamento::setBANCO(string banco) {
	this->banco = banco;
}

string Financiamento::getBANCO() {
	return this->banco;
}

void Financiamento::setVALORENTRADA(double valorEntrada) {
	this->valorEntrada = valorEntrada;
}

double Financiamento::getVALORENTRADA() {
	return this->valorEntrada;
}

void Financiamento::setQANTMESES(int qantMeses) {
	this->qantMeses = qantMeses;
}

int Financiamento::getQANTMESES() {
	return this->qantMeses;
}

void Financiamento::calculoFinanciamento(double valorImovel) {
	this->precoFinanciado = (this->qantMeses * valorImovel * this->taxa) - this->valorEntrada;
}

double Financiamento::getFinanciado() {
	return this->precoFinanciado;
}
