#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e;
	
	cout << "Inserisci un numero: ";
	cin >> a;
	cout << "Inserisci un numero: ";
	cin >> b;
	cout << "Inserisci un numero: ";
	cin >> c;
	cout << "Inserisci un numero: ";
	cin >> d;
	cout << "Inserisci un numero: ";
	cin >> e;
	
	int cont = 0;
	
	if(a%3==0) {
		cont++;
	}
	if(b%3==0) {
		cont++;
	}
	if(c%3==0) {
		cont++;
	}
	if(d%3==0) {
		cont++;
	}
	if(e%3==0) {
		cont++;
	}
	
	cout << cont << " numeri sono divisibili per 3\n";
	return 0;
}

