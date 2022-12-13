#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
	ifstream in("input1.txt");
	
	int i;
	int vet[MAX];
	int n;
	
	in >> n;
	for(i=0;i<n;i++) {
		in >> vet[i];
	}
	
	int x;
	cin >> x;
	
	int vet2[MAX];
	
	for(i=0;i<n;i++) {
		vet2[i] = vet[i]+x;
	}
	
	for(i=0;i<n;i++) {
		cout << vet2[i] << " ";
	}

	in.close();
	return 0;
}

