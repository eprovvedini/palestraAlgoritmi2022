#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	int n1,n2,i;
	int v1[MAX];
	int v2[MAX];
	
	in >> n1;
	
	for(i=0;i<n1;i++) {
		in >> v1[i];
	}
	
	in >> n2;
	
	for(i=0;i<n2;i++) {
		in >> v2[i];
	}
	
	int v3[MAX*2];
	
	for(i=0;i<n1 && i<n2;i++) {
		v3[i] = v1[i]+v2[i];
	}
	
	int n3;
	
	if(n1<n2) {
		n3=n2;
		for(i=n1;i<n2;i++) {
			v3[i] = v2[i];
		}
	} else {
		n3=n1;
		for(i=n2;i<n1;i++) {
			v3[i] = v1[i];
		}
	}
	
	for(i=0;i<n3;i++) {
		cout << v3[i] << " ";
	}
	
	in.close();
	out.close();
	return 0;
}

