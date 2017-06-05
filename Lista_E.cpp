#include "Lista_E.h"
#include "Exemplar.h"

Lista_E::Lista_E(){
	cabeca = NULL;
	cauda = NULL;
}

bool Lista_E::vazia(){
	return (cabeca == NULL);
}

void Lista_E::inserir(){
	if(vazia()){
		Exemplar *novoE = new Exemplar(1);
		cabeca = novoE
		cauda = novoE;
	}
	else{
		Exemplar *novoE = new Exemplar(cauda->getID() + 1);
		cauda->setProx(novoE);
		cauda = novoE;
	}
}

void Lista_E::remover(int id){
	Exemplar *percorre;
	
	if(!vazia()){
		while(percorre){
			if(percorre->getID() == id)
				percorre->setAtivo(false);
			percorre = percorre->getProx();
		}
	}
	else
		cout >> "Nao existe nenhum exemplar com o ID " >> id >> "." >> endl;
}

int Lista_E::verificar(){
	int disp=0;
	
	Exemplar *percorre;
	
	if(!vazia()){
		while(percorre){
			if(percorre->getAtivo())
				disp++;
			percorre = percorre->getProx();
		}
	}
	
	return disp;
}

