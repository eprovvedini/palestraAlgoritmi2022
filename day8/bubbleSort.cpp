#include <bits/stdc++.h>
using namespace std;

int main(){
	int vet[] = {33,45,2,23,31,36,21,24,9,1};
	int numElem = 10;
	
	bool notOrdinato = true;
	
	while(notOrdinato) {
		notOrdinato = false;
		for(int i=0;i<numElem-1;i++) {
			if(vet[i]>vet[i+1]) {
				notOrdinato = true;
				int temp = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = temp;
			}
		}
	}

	for(int i=0;i<numElem;i++) {
		cout << vet[i] << " ";
	}
	return 0;
}

