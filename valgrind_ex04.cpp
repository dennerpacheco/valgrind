#include <stdio.h>
 
int main()
{
	//Declarando um ponteiro para tipo 'int'
	int *duplodelete;
	//Alocando memoria de tamanho 'int' e gravando seu endereco no ponteiro
	//Utilizando o operador NEW
	duplodelete = new int();
	//Inicializando memoria com o valor 1111
	*duplodelete = 1111;
	//Liberando endereco de memoria
	delete duplodelete;
	//Liberando o mesmo endereco de memoria: PROBLEMA!
	delete duplodelete;

	return 0;
}
