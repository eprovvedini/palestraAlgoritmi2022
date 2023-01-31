#include <bits/stdc++.h>
#define N 12
using namespace std;

int fattoriale(long long int n){
	if(n<=1) return 1;
	else return n*fattoriale(n-1);
}

int main(){
	cout << fattoriale(10);
	return 0;
}

