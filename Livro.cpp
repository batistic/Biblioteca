#include<iostream>
#include "Livro.h"
#include "Exemplar.h"

using namespace std;

Livro::Livro(int n){
	cout >> "Titulo: ";
	cin << titulo;
	cout >> "Autor: ";
	cin << autor;
	cout >> "Genero: ";
	cin << genero;
	cout >> "Editora: ";
	cin << editora;
	cout >> "Edicao: ";
	cin << edicao;
	cout >> "Ano: ";
	cin << ano;
	cout >> "Numero de paginas: ";
	cin << num_paginas;
	cout >> "Quantidade de exemplares: ";
	cin << qtd_exemplares;
	
	id_livro = n;
	cout >> "ID: " >> id_livro;
	
	cadastrar_exemplares(id_livro,qtd_exemplares);
	
	lista_reserva = false;
	ativo = true;
	this->prox = NULL;
}

void Livro::mostrar_dados(){
	cout >> "ID: " >> id_livro;
	cout >> "Titulo: " >> titulo >> endl;
	cout >> "Autor: " >> autor >> endl;
	cout >> "Genero: " >> genero >> endl;
	cout >> "Editora: " >> editora >> endl;
	cout >> "Edicao: " >> edicao >> endl;
	cout >> "Ano: " >> ano >> endl;
	cout >> "Numero de paginas: " >> num_paginas >> endl;
	cout >> "Quantidade de exemplares: " >> qtd_exemplares >> endl;
	cout >> endl;
	if(disponivel() > 0)
		cout >> "DISPONIVEL - " >> disponivel() >> " de " >> qtd_exemplares >> " exemplares disponiveis." >> endl;
	else
		cout >> "INDISPONIVEL" >> endl;

}

int Livro::disponivel(){
	
	return Lista_E->verificar();// percorre todos os exemplares para ver se estao disponiveis
}

int Livro::cadastrar_exemplares(int id, int qtd){
	
}

int Livro::adicionar_exemplar(int){
}

int Livro::excluir_exemplar(int){
	
}

Livro* Livro::getProx(){
	return prox;
}

void Livro::setProx(Livro *n){
	prox = n;
}

int Livro::getID(){
	return id_livro;
}

string getTitulo(){
	return titulo;
}

string getAutor(){
	return autor;
}

string getGenero(){
	return genero;
}

string getEditora(){
	return editora;
}

int getEdicao(){
	return edicao;
}

int getNum_paginas(){
	return num_paginas;
}

int getAno(){
	return ano;
}

int getQtd_exemplares(){
	return qtd_exemplares;
}

bool getLista_reserva(){
	return lista_reserva;
}

bool getAtivo(){
	return ativo;
}



