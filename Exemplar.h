#ifndef EXEMPLAR_H
#define EXEMPLAR_H

class Exemplar
{
	public:
		Exemplar(int);
		void setAtivo(bool);
		void setProx(Exemplar *n);
		int fazer_emp();
		int fazer_dev();
		int getID();
		bool getAtivo();
		Exemplar *getProx();
		
	protected:
		int id_ex;
		bool disp;
		bool ativo;
		int dias_emp;
		Exemplar *prox;
};

#endif
