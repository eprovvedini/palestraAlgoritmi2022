#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int main(){
	int k = 3;
	int n = 4;
	int i,j;
	int squadre[MAX];
	int maggiori[MAX];
	
	for(i=0, j=0;i<k;i++) {
		int temp, maggiore;
		in >> temp;
		maggiore = temp;
		squadre[j] = temp;
		j++;
		for(int x=1;x<n;x++) {
			in >> temp;
			if(temp > maggiore) {
				maggiore = temp;
			}
			squadre[j] = temp;
			j++;
		}
		maggiori[i] = maggiore;
	}
	
	sort(squadre, squadre + (n*k));
	sort(maggiori, maggiori + (n*k));
	
	for(int i=0;i<k;i++) {
		if(squadre[i]!=maggiori[i]) {
			cout << "0";
			return 0;
		}
	}
	

	return 0;
}

