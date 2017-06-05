#ifndef LIVRO_H
#define LIVRO_H

class Livro
{
	public:
		Livro(int);
		void mostrar_dados();
		Livro *getProx();
		void setProx(Livro *n);
		void setAtivo(bool);
		void setQtd_exemplares(int);
		int adicionar_exemplar();
		int disponivel();
		int getID();
		string getTitulo();
		string getAutor();
		string getGenero();
		string getEditora();
		int getEdicao();
		int getNum_paginas();
		int getAno();
		int getQtd_exemplares();
		bool getLista_reserva();
		bool getAtivo();
		
	protected:
		int id_livro;
		string titulo;
		string autor;
		string genero;
		strig editora;
		int edicao;
		int num_paginas;
		int ano;
		int qtd_exemplares;
		bool lista_reserva;
		bool ativo;
		Livro *prox;
		Lista_E exemplares;
};

#endif
