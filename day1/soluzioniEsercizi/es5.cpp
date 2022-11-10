#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	cout << "Inserisci il terzo numero: ";
	cin >> c;
	
	/*NB1: se nell'if c'è una sola istruzione, posso
	non scrivere le parentesi graffe
	NB2: questo è un commento su più righe. Quando eseguite il codice,
	i commenti non vengono considerati. Servono per scrivere delle note
	per capire meglio cosa fa il vostro codice
	*/
	if(a>=b && a>=c)
		cout << "Il maggiore e' il primo (" << a << ")\n";
	else if(b>=a && b>=c)
		cout << "Il maggiore e' il secondo (" << b << ")\n";
	else if(c>=a && c>=b)
		cout << "Il maggiore e' il terzo (" << c << ")\n";
		
	
	return 0;
}

