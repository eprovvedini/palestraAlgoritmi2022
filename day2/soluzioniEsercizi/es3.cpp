#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	int cont = 2; //parto da 2 perchè nel ciclo non considero 1 e n stesso, 
	//che sono sempre divisori di n
	cin >> n;
	
	for(i=2;i<=n/2;i++) {
		if(n%i==0)
			cont++;
	}
	
	cout << "Il numero ha " << cont << " divisori\n";
	
	return 0;
}

