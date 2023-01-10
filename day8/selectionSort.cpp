#include <bits/stdc++.h>
using namespace std;

int main(){
	int vet[] = {33,45,2,23,31,36,21,24,9,1};
	int numElem = 10;
	
	for(int i=0;i<numElem;i++) {
		//trovo minimo a partire da i
		int minimo = vet[i];
		int pos = i;
		for(int j=i;j<numElem;j++) {
			if(vet[j]<minimo) {
				minimo = vet[j];
				pos = j;
			}
		}
		//scambio minimo
		int temp = vet[pos];
		vet[pos] = vet[i];
		vet[i] = temp;
	}
	
	for(int i=0;i<numElem;i++) {
		cout << vet[i] << " ";
	}
	return 0;
}

