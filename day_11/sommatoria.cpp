#include <bits/stdc++.h>
#define N 12
using namespace std;

int sommatoria(int n) {
	if(n<=0) {
		return 0;
	} else{
		return n+sommatoria(n-1);
	}
}

int main(){
	cout << sommatoria(N);
	return 0;
}

