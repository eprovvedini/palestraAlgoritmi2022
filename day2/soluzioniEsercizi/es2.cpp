#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	
	cin >> n;
	
	for(i=2;i<=n/2;i++) {
		if(n%i==0) {
			cout << "Il numero non e' primo\n";
			return 0;
		}
	}
	
	cout << "Il numero e' primo\n";
	
	return 0;
}

