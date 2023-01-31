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
	
	int ris = 0;
	int massimo = 0;

	for(int i=0;i<n;i++) {
		int somma = 0;
		for(int j=0;j<m;j++) {
			somma+=matrix[i][j];
		}
		if(somma>massimo) {
			massimo = somma;
			ris = i;
		}
	}
	
	cout << "La riga con somma maggiore e' la riga " << ris << ", con somma " << massimo << "\n";
	
	in.close();
	out.close();
	return 0;
}

