#include <stdlib.h>
 
int main()
{
	//Declarando um ponteiro para tipo 'int'
	int *int_usando_new;
	//Alocando memoria de tamanho 'int' e gravando seu endereco no ponteiro
	//Utilizando NEW
	int_usando_new = new int();
	//Inicializando memoria com o valor 1111
	*int_usando_new = 1111;
	//Liberando endereco de memoria
	//Utilizando FREE: Nao utilizacao do par certo para desalocar memoria
	//New -> Delete
	//Malloc -> Free
	free (int_usando_new);

	return 0;
}
