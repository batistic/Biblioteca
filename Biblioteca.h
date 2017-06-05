#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

class Biblioteca
{
	public:
		Biblioteca();
		int cadastrar_cliente(Cliente cliente);
		int remover_cliente(Cliente cliente);
		int cadastrar_livro(Livro livro);
		int remover_livro(Livro livro);
		int realizar_emprestimo(Livro livro);
		int realizar_devolucao(Exemplar exemplar);
		Cliente cosulta_cliente(char *nome);
		Livro consulta_livro(char *titulo);
		Livro consulta_livro(int id);
	protected:
		int nClientes;
		int nLivros;
		int nEmprestimos;
};

#endif
