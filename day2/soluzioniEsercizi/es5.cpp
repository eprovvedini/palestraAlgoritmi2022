#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int somma = 0;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		somma+=temp;
	}
	
	cout << "Somma = " << somma;
	return 0;
}

