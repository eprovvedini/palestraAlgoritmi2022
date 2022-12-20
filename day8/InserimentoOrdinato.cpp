#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
	int i, operazione, elem;
	int vet[MAX];
	int numElem = 0;
	
	cout << "1. Inserisci un numero nell'array\n";
	cout << "2. Stampa l'array\n";
	cout << "3. Esci\n\n";
	
	do{
		cout << "Cosa vuoi fare?";
		cin >> operazione;
		switch(operazione) {
			case 1:
				cout << "Che numero vuoi inserire?";
				cin >> elem;
				//inserimento ordinato
				//ricordate
				//1. controllate che l'array non sia già pieno
				//2. ogni volta che inserite un nuovo elemento, numElem va incrementato
				break;
			case 2:
				for(i=0;i<numElem;i++) {
					cout << vet[i] << " ";
				}
				cout << "\n";
				break;
			case 3:
				cout << "FINE\n";
				break;
			default:
				cout << "Operazione non consentita\n";
				break;
		}
	} while(operazione!=3);
	return 0;
}

