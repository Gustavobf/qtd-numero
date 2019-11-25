#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int num[10];
	int qtd_num = 0;
	int counter = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Informe um numero: ";
		cin >> num[i];
	}

	for (int a = 0; a < 10; a++) {
		cout << num[a] << "   ";
	}

	cout << endl << "Informe um numero para saber a quantidade presente: ";
	cin >> counter;

	for (int b = 0; b < 10; b++) {
		if (counter == num[b])
			qtd_num += 1;
	}

	cout << "Existem " << qtd_num << " copias do numero " << counter << endl;
	system("pause");
	return 0;

}