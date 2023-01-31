#include <bits/stdc++.h>
#define N 3
using namespace std;

void printTheArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void generateAllBinaryStrings(int n, int arr[], int i) {
	if (i == n) {
		printTheArray(arr, n);
		return;
	}

	arr[i] = 0;
	generateAllBinaryStrings(n, arr, i + 1);

	arr[i] = 1;
	generateAllBinaryStrings(n, arr, i + 1);
}

int main(){
	int arr[N];

	generateAllBinaryStrings(N, arr, 0);

	return 0;
}

