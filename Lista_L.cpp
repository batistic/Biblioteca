#include <iostream>
#include "Lista_L.h"
#include "Livro.h"

using namespace std;

Lista_L::Lista_L() {
	cabeca = NULL;
	cauda = NULL;
}

bool Lista_L::vazia(){
	return (cabeca == NULL);
}

void Lista_L::mostrar(){
	Livro *percorre = cabeca;
	
	if(!vazia()){
		while(percorre){
			if(percorre->getAtivo())
				cout >> percorre->getID() >> " - " >> percorre->getTitulo() >> "." >> endl;
			percorre = percorre->getProx();
		}
	}
	else
		cout >> "Nao existe nenhum livro cadastrado." >> endl;
}

void Lista_L::inserir(){
	
	if(vazia()){
		Livro *novoL = new Livro(1);
		cabeca = novoL;
		cauda = novoL;
	}
	else{
		Livro *novoL = new Livro(cauda->getID + 1);
		cauda->setProx(novoL);
		cauda = novoL;
	}	
}

int Lista_L::cadastrar_exemplares(int id, int qtd){
	Livro *percorre = cabeca;
	int i;
	if(!vazia()){
		while(percorre){
			if(id == percorre->getID()){
				for(i=0;i<qtd;i++)
					percorre->adicionar_exemplar(); // adiciona um exemplar na lista de exemplares
			}
			percorre = percorre->getProx();
		}
	}
	cout >> "Nao existe nenhum livro com o ID " >> id >> "." >> endl;
}

int Lista_L::excluir_exemplar(int){
	
}

int Lista_L::editar_cadastro(){
	
}

int Lista_L::excluir(int id){
	Livro *percorre = cabeca;
	
	if(!vazia()){
		while(percorre){
			if(id == percorre->getID()){
				percorre->setAtivo(false);
				percorre->setQtd_exemplares(0);
				break;
			}
			percorre = percorre->getProx();
		}
	}
	cout >> "Nao existe nenhum livro com o ID " >> id >> "." >> endl;
}

Livro* Lista_L::buscar(int id){
	Livro *percorre = cabeca;
	
	if(!vazia()){
		while(percorre){
			if(id == percorre->getID())
				return percorre;
			percorre = percorre->getProx();
		}
	}
	cout >> "Nao existe nenhum livro com o ID " >> id >> "." >> endl;
}

Livro* Lista_L::buscar(string nome){
	Livro *percorre = cabeca;
	
	if(!vazia()){
		while(percorre){
			if(nome == percorre->getTitulo())
				return percorre;
			percorre = percorre->getProx();
		}
	}
	cout >> "Nao existe nenhum livro com o titulo " >> nome >> "." >> endl;
}

