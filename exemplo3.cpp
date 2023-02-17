#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int i;
	int *pi;
	
	double d;
	double *pd;
	
	//cout << "Digite um valor int: ";
	//cin >> i;
	i = 5;
	cout << "Valor int digitado: " << i << endl;
	cout << "Tamanho do i: " << sizeof(i) << endl;
	cout << "Endereço do valor int digitado: " << &i << endl;
	cout << endl;
	pi = &i;
	
	//cout << "Digite um valor double: ";
	//cin >> d;
	d = 123.456;
	cout << "Valor double digitado: " << d << endl;
	cout << "Tamanho do d: " << sizeof(d) << endl;
	cout << "Endereço do valor double digitado: " << &d << endl;
	cout << endl;
	pd = &d;
	
	//*(&i) = 500;
	*pi = 500;
	cout << "Valor int digitado: " << i << endl;
	cout << "Valor do ponteiro int: " << pi << endl;
	cout << "Tamanho do i: " << sizeof(i) << endl;
	cout << "Tamanho do ponteiro i: " << sizeof(pi) << endl;
	cout << "Endereço do valor int digitado: " << &i << endl;
	cout << "Endereço do ponteiro int : " << &pi << endl;
	cout << endl;
	
	*pd = 987.654;
	cout << "Valor double digitado: " << d << endl;
    cout << "Valor do ponteiro double: " << pd << endl;
	cout << "Tamanho do d: " << sizeof(d) << endl;
	cout << "Tamanho do ponteiro d: " << sizeof(pd) << endl;
	cout << "Endereço do valor double digitado: " << &d << endl;
    cout << "Endereço do ponteiro double : " << &pd << endl;
	cout << endl;
	
	
		
		
	return 0;
}