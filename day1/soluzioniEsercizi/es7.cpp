#include <bits/stdc++.h>
using namespace std;

int main(){
	int base, altezza;
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	in >> base >> altezza;
	
	out << "Area = " << base*altezza << "\n";
	out << "Perimetro = " << base*2+altezza*2 << "\n";
	
	in.close();
	out.close();
	return 0;
}

