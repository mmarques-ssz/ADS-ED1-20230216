#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
	
	cout << "Digite um valor int: ";
	cin >> i;

	cout << "Digite um valor double: ";
	cin >> d;
	
	
	// exibição padrão
	cout << "Valor int digitado: " << i << endl;
	cout << "Valor double digitado: " << d << endl;
	
	// definir largura do dado
	cout << "Valor int digitado: " << setw(10) << i << endl;
	cout << "Valor double digitado: " << setw(10) << d << endl;
	
	// definir precisão
	
	cout << "Valor int digitado: " << setw(10) << i << endl;
	cout << "Valor double digitado: " << setw(10) << setprecision(4) << d << endl;
	
	// fixar casas
	cout << fixed;
	cout << "Valor int digitado: " << setw(10) << i << endl;
	cout << "Valor double digitado: " << setw(10) << setprecision(2) << d << endl;
	
		
	return 0;
}