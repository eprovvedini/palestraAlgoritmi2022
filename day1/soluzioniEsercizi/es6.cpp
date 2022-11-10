#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	char operazione;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	cout << "Inserisci un simbolo di operazione (+,-,*,/): ";
	cin >> operazione;
	cout << "\n";
	
	switch(operazione){
		case '+':
			cout << "Somma\n";
			cout << a << operazione << b << "=" << a+b;
			break;
		case '-':
			cout << "Sottrazione\n";
			cout << a << operazione << b << "=" << a-b;
			break;
		case '*':
			cout << "Moltiplicazione\n";
			cout << a << operazione << b << "=" << a*b;
			break;
		case '/':
			cout << "Divisione\n";
			cout << a << operazione << b << "=" << a/b;
			break;
		default:
			cout << "Simbolo non valido";
			break;
	}
	
	return 0;
}

