#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int visitato[MAX]; //se si dichiara fuori dal main, è in automatico inizializzato tutto a false
int n,m;
vector<vector<int>> g;
queue<int> coda;

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
	
	coda.push(0); //inserisco il primo nodo nella coda
	
	while(!coda.empty()) {
		int nodo = coda.front(); //nodo è il primo nodo "in fila" nella coda (quindi alla prima iterazione del ciclo è 0)
		coda.pop(); //elimino il nodo dalla coda
		cout << "Sto visitando il nodo " << nodo << "\n";
		visitato[nodo] = true;
		for(int i=0;i<g[nodo].size();i++) { //ciclo su tutti i vicini di nodo
			int vicino=g[nodo][i];
			if(!visitato[vicino]) { //se questo vicino non è ancora stato visitato
				coda.push(vicino); //lo metto in coda
			}
		}
	}
	
	in.close();
	out.close();
	return 0;
}

