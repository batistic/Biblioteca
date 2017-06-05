#ifndef LISTA_E_H
#define LISTA_E_H
#include "Exemplar.h"

class Lista_E
{
	public:
		Lista_E();
		bool vazia();
		void inserir();
		void remover(int);
		int verificar();
		
	protected:
		Exemplar *cabeca;
		Exemplar *cauda;
};

#endif
