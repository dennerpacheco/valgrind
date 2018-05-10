#include <iostream>
using namespace std;
int main()
{
	//Declarando um ponteiro para tipo 'int'
	int *usarEndForaAlocacao;
	//Alocando memoria de tamanho 'int' e gravando seu endereco no ponteiro
	usarEndForaAlocacao = new int();
	//Inicializando memoria com o valor 1111
	*usarEndForaAlocacao = 1111;
	//Tentando imprimir o valor de memoria alem do espaco alocado
	cout<<*(usarEndForaAlocacao+1)<<endl;

	return 0;
}

