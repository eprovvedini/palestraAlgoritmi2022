#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int cont = 0;
	bool ok = true;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		for(int j=2;j<=temp/2 && ok;j++) {
			if(temp%j==0) {
				ok = false;	
			}
		}
		if(ok) {
			cont++;
		}
		ok = true;
	}
	
	cout << "Ci sono " << cont << " numeri primi\n";
	return 0;
}

