#include "C:\Cabecalhos C++\std_lib_facilities.h"

int main()
{
	/*double gc;
	cin >> gc;
	double gf = 9.0 / 5 * gc + 32;
	cout << gf;*/
	
	// 4.4.1.1 - Comando if

	
	//int a = 0;
	//int b = 0;
	//cout << "Por favor, digite dois inteiros \n";
	//cin >> a >> b;
	//if (a < b)
	//	// 1ª alternativa(usada se a condição eh verdadeira):
	//	cout << "max(" << a << "," << b << ") é" << b <<"\n";
	//else
	//	// 2ª alternativa ( usada se a condição eh falsa): 
	//	cout << "max(" << a << "," << b << ") é " << a << "\n";
	//
	// Conversor de polegadas para centimetros

	const double cm_por_pol = 2.54;
	double comprimento = 1;
	char unidade = ' ';
	cout << " Por favor, informe o comprimento seguido pela unidade (c ou p):\n";
	cin >> comprimento >> unidade;

	if (unidade == 'p')
		cout << comprimento << "pol == " << cm_por_pol * comprimento << 
		"cm\n";
	else if (unidade == 'c')
		cout << comprimento << "cm == " << comprimento / cm_por_pol << 
		"pol\n";
	else
		cout << "Desculpe não reconheço a unidade indicada por " << 
		 unidade << "\n";
}