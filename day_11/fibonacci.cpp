#include <bits/stdc++.h>
#define N 12
using namespace std;

int fibonacci(int n) {
	if(n==1 || n==2) {
		return 1;
	} else if(n>2) {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	cout << fibonacci(N);
	return 0;
}

