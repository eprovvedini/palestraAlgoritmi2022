#include <bits/stdc++.h>
#define MAX 10000
#define INF 1000000000
using namespace std;

struct boh{
	int uno;
	int due;
};

vector <vector <pair <int,int> > > v;
int nodi, archi,nonBoll,boll;
pair <int,int> dist[MAX];
int ris=0;

int dijkstra(vector <vector <pair <int,int> > > v, pair <int,int> dist[], int n) {
	if(dist[nodi-1].second==1) {
		return dist[nodi-1].first;
	} else {
		for(int i=0;i<v[n].size();i++) {
			int vicino=v[n][i].first;
			int x=v[n][i].second;
			if(dist[vicino].first==INF) {
				dist[vicino].first=dist[n].first+x;
			} else if(dist[vicino].second!=1) {
				dist[vicino].first=min(dist[vicino].first,dist[n].first+x);
			}
		}
	
		int min=INF;
		int succ;
	
		for(int i=0;i<nodi;i++) {
			if(dist[i].second!=1 && dist[i].second!=INF) {
				if(dist[i].first<min) {
					min=dist[i].first;
					succ=i;
				}
			}
		}
		dist[succ].second=1;
		return dijkstra(v,dist,succ);
	}
}

int main () {
	ifstream in ("input.txt");
	ofstream out ("output.txt");
	
	in >> nodi >> nonBoll >> boll;
	
	for(int i=0;i<nodi;i++) {
		dist[i].first=INF;
		dist[i].second=0;
	}
	
	v.assign(nodi+1, vector<pair<int,int> >());
	
	for(int i=0;i<nonBoll;i++) {
		int da,a;
		in >> da >> a;
		v[da-1].push_back({a-1,0});
		v[a-1].push_back({da-1,0});
	}
	
	for(int i=0;i<boll;i++) {
		int da,a;
		in >> da >> a;
		v[da-1].push_back({a-1,1});
		v[a-1].push_back({da-1,1});
	}
	
	dist[0].first=0;
	dist[0].second=1;
	
	/*for(int i=0;i<nodi;i++) {
		cout << i << ": ";
		for(int j=0;j<v[i].size();j++) {
			cout << v[i][j].first << " ";
		}
		cout << "\n";
	}*/
	
	out << dijkstra(v,dist,0);
	
	in.close();
	out.close();
	return 0;
}