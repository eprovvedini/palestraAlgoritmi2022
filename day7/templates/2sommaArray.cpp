#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
	ifstream in("input2.txt");
	
	int n1,n2,i;
	int v1[MAX];
	int v2[MAX];
	
	//inizializzare i due vettori da input2.txt
	//il file è così strutturato:
	//n1 (numero di elementi del primo array, minore di 100)
	//n1 numeri (numeri da inserire nel primo array)
	//n2
	//n2 numeri
	//Esempio:
	//4
	//1 2 5 3
	//7
	//8 3 0 2 5 1 8
	
	//creare un terzo array che sia la somma dei due array precedenti
	//Nel caso di esempio il terzo array sarà
	//9 5 5 5 5 1 8
	//ATTENZIONE: un array potrebbe avere più elementi dell'altro!!!
	
	in.close();
	return 0;
}

