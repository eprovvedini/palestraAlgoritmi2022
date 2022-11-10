#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	
	cout << "Inserisci un numero di 4 cifre: ";
	cin >> num;
	
	int temp;
	temp = num%10;
	cout << "Unita' = " << temp << "\n";
	num = num/10;
	temp = num%10;
	cout << "Decine = " << temp << "\n";
	num = num/10;
	temp = num%10;
	cout << "Centinaia = " << temp << "\n";
	num = num/10;
	cout << "Migliaia = " << num << "\n";
	return 0;
}

