#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
	//Vogliamo creare un programma che permetta all'utente di gestire un'array facendo le seguenti operazioni:
	//1. inserire un elemento alla fine dell'array
	//Esempio: il mio array è {1,3,5}, se l'utente vuole inserire 7, l'array deve diventare {1,3,5,7}
	//NB: se l'array è già pieno, non inserire nulla
	
	//2. inserire un elemento in una certa posizione dell'array, decisa dall'utente
	//Esempio: il mio array è {1,3,5,7}
	//L'utente vuole inserire 2 in posizione 2
	//L'array deve diventare {1,3,2,5,7}
	//Notare che abbiamo spostato 5 e 7 di un posto a destra
	
	//3. cancellare un elemento dall'array, senza lasciare "buchi"
	//Esempio: l'array è {1,3,2,5,7}
	//Voglio cancellare l'elemento in posizione 4
	//L'array deve diventare {1,3,2,7}
	//Notare che abbiamo spostato il 7 di un posto a sinistra
	
	//4. stampare l'array
	
	//5. terminare il programma
	
	int i;
	int operazione;
	int numElem = 0;
	int arr[MAX];
	
	cout << "MENU\n";
	cout << "1: inserisci elemento in coda\n";
	cout << "2: inserisci elemento alla posizione desiderata\n";
	cout << "3: cancella elemento alla posizione desiderata\n";
	cout << "4: stampa array\n";
	cout << "5: esci\n\n";
	
	do{
		cout << "Cosa vuoi fare?";
		cin >> operazione;
		switch (operazione){
			case 1: //inserimento in coda
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				cout << "Operazione non consentita\n";
		}
	}
	
	cout << "FINE";
	
	in.close();
	out.close();
	return 0;
}

