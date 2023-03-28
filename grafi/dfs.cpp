#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int visitato[MAX]; //se si dichiara fuori dal main, è in automatico inizializzato tutto a false
int n,m;
vector<vector<int>> g;
	
void dfs(int nodo) {
	cout << "Sto visitando il nodo " << nodo << "\n";
	visitato[nodo] = true; //in questo modo non rischio di tornare su questo nodo e finire in un loop infinito
	for(int i=0;i<g[nodo].size();i++) { //ciclo su tutti i vicini del nodo
		if(!visitato[g[nodo][i]]) { //se non ho ancora visitato questo vicino
			dfs(g[nodo][i]); //lo visito
		}
	}
}

int main(){
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	in >> n >> m; //numero di nodi e archi
	
	g.assign(n, vector<int>());
	
	for(int i=0;i<m;i++) { //prendo in input gli archi
		int a,b;
		in >> a >> b;
		g[a].push_back(b); //si assume il grafo sia orientato, aggiungo un arco dal nodo a al nodo b
		//se il grafo non è orientato, si aggiunge g[b].push_back(a)
	}
	
	dfs(0);
	
	in.close();
	out.close();
	return 0;
}

