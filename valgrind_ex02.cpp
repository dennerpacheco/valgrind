#include <stdio.h>
#include <iostream>
 
int main()
{
	//Declarando um ponteiro para tipo 'int'
	int *usarEndDesalocado;
	//Alocando memoria de tamanho 'int' e gravando seu endereco no ponteiro
	usarEndDesalocado = new int();
	//Inicializando memoria com o valor 1111
	*usarEndDesalocado = 1111;
	//Desalocando memoria
	delete usarEndDesalocado;
	//Tentando imprimir o valor de memoria previamente desalocada: Comportamento indefinido!
	printf ("%i\n", *usarEndDesalocado);

	return 0;
}
