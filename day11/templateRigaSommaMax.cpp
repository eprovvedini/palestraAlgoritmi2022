#include <bits/stdc++.h>
#define N 100
#define M 100
using namespace std;

int main(){
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	int matrix[N][M];
	
	in >> n >> m;
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			in >> matrix[i][j];
		}
	}

	//codice che risolve l'esercizio
	
	in.close();
	out.close();
	return 0;
}

