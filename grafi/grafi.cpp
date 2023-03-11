#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream in("input.txt");
	ofstream out("output.txt");

	vector<vector<int>> grafo_non_pesato;
	vector<vector<pair<int,int>> grafo_pesato;
	
	int n = 5; //numero di nodi
	
	grafo_non_pesato.assign(vector<int>(), n);
	grafo_pesato.assign(vector<int>(), n);
	
	grafo_non_pesato[0].push_back(1);
	//dal nodo 0 posso raggiungere il nodo 1. Se il grafo non è orientato, dovremmo fare anche
	//grafo_non_pesato[1].push_back(0);
	
	grafo_pesato[2].push_back(make_pair(3,54));
	//dal nodo 2 posso raggiungere il nodo 3 con un "peso" (o distanza, come si preferisce chiamare) di 54

	in.close();
	out.close();
	return 0;
}

