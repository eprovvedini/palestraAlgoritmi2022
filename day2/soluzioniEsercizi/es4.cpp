#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int somma = 0;
	cin >> n;
	
	for(int i=1;i<=n;i++) {
		somma+=i;
	}
	
	cout << "Somma dei numeri da 1 a " << n << " = " << somma;
	return 0;
}

