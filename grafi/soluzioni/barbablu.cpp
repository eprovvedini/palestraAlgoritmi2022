#include <bits/stdc++.h>
#define MAX 100
#define INF INT_MAX
#define T 20
using namespace std;

int n,m,c,k;
bool aria[MAX];
int dist[MAX];
int respira[MAX];
vector <vector <pair <int,int> > > g;
queue <int> q;

int main () {
	ifstream in ("input.txt");
	ofstream out("output.txt");
	
	int n;
	
	in >> n >> m >> c >> k;
	
	for(int i=0;i<n;i++) {
		aria[i]=false;
		dist[i]=INF;
		respira[i]=INF;
	}
	
	dist[0]=0;
	respira[0]=0;
	
	for(int i=0;i<k;i++) {
		int temp;
		in >> temp;
		aria[temp-1]=true;
	}
	
	g.assign(n,vector<pair<int,int>>());
	
	for(int i=0;i<m;i++) {
		int da,a,d;
		in >> da >> a >> d;
		da--;
		a--;
		g[da].push_back(make_pair(a,d));
		g[a].push_back(make_pair(da,d));
	}
	
	q.push(0);
	
	while(!q.empty()) {
		int nodo=q.front();
		q.pop();
		/*cout << "\nnodo: " << nodo << "\n";
		cout << "distanza: " << dist[nodo] << "\n";
		cout << "respira: " << respira[nodo] << "\n";*/
		for(int i=0;i<g[nodo].size();i++) {
			int x=g[nodo][i].first;
			//cout << x << "\n";
			//cout << respira[nodo]+g[nodo][i].second << "\n";
			if(respira[nodo]+g[nodo][i].second<=T) {
				if(aria[x])
					respira[x]=0;
				else
					respira[x]=min(respira[x], respira[nodo]+g[nodo][i].second);
				if(dist[nodo]+g[nodo][i].second<dist[x]) {
					dist[x]=dist[nodo]+g[nodo][i].second;
					q.push(x);
				}
			}
			/*cout << "\nNODO: " << x << "\n";
			cout << "DISTANZA: " << dist[x] << "\n";
			cout << "RESPIRA: " << respira[x] << "\n";*/
		}
	}
	
	if(dist[c-1]==INF)
		out << -1;
	else
		out << dist[c-1];
	
	in.close();
	out.close();
	return 0;
}