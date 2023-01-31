#include <bits/stdc++.h>
#define N 6
#define N0 2
#define N1 3
using namespace std;

int cont = 0;

void printTheArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void generateBinaryStrings(int n, int arr[], int i, int n0, int i0, int n1, int i1) {
	if (i == n) {
		printTheArray(arr, n);
		cont++;
		return;
	}
	
	if(i0<n0) {
		arr[i] = 0;
		generateBinaryStrings(n, arr, i + 1, n0, i0+1, n1, 0);
	}
	
	if(i1<n1) {
		arr[i] = 1;
		generateBinaryStrings(n, arr, i + 1, n0, 0, n1, i1+1);
	}
	
}

int main(){
	int arr[N];

	generateBinaryStrings(N, arr, 0, N0, 0, N1, 0);

	return 0;
}

