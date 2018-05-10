#include <stdio.h>
 
int main()
{
	//Declarando um ponteiro para tipo 'int'
	int *valor_inteiro_ptr;
	//Alocando memoria de tamanho 'int' e gravando seu endereco no ponteiro
	valor_inteiro_ptr = new int();
	//Inicializando memoria com o valor 1111
	*valor_inteiro_ptr = 1111;
	//Nova alocacao de memoria, endereco para a antiga alocacao sera perdido!
	//Perdemos o endereco anteriormente alocado
	valor_inteiro_ptr = new int();
	//Desalocando endereco mais recentemente alocacao
	//Endereco alocado anteriormente nao foi desalocado: MEMORY LEAK!
	delete valor_inteiro_ptr;

	return 0;
}
