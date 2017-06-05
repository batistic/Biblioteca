#ifndef LISTA_L_H
#define LISTA_L_H
#include "Livro.h"

class Lista_L
{
	public:
		Lista_L();
		bool vazia();
		void mostrar();
		void inserir();
		int cadastrar_exemplares(int,int);
		int excluir_exemplar(int);
		int editar_cadastro();
		int excluir(int);
		Livro* buscar(int);
		Livro* buscar(string);
	protected:
		Livro *cabeca;
		Livro *cauda;
		
};

#endif
