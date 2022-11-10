#include <bits/stdc++.h>
using namespace std;

int main(){
	int base, altezza;
	
	cout << "Inserisci base: ";
	cin >> base;
	cout << "Inserisci altezza: ";
	cin >> altezza;
	
	cout << "Area = " << base*altezza << "\n";
	cout << "Perimetro = " << base*2+altezza*2 << "\n";
	return 0;
}

