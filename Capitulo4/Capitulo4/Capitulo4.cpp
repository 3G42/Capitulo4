#include "C:\Cabecalhos C++\std_lib_facilities.h"

int main()
{
	/*double gc;
	cin >> gc;
	double gf = 9.0 / 5 * gc + 32;
	cout << gf;*/
	
	// 4.4.1.1 - Comando if

	
	int a = 0;
	int b = 0;
	cout << "Por favor, digite dois inteiros \n";
	cin >> a >> b;
	if (a < b)
		// 1� alternativa(usada se a condi��o eh verdadeira):
		cout << "max(" << a << "," << b << ") �" << b <<"\n";
	else
		// 2� alternativa ( usada se a condi��o eh falsa): 
		cout << "max(" << a << "," << b << ") � " << a << "\n";
	
}