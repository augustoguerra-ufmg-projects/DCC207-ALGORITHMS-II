#include<bits/stdc++.h>
using namespace std;

struct graph_t
{
	int V;
	vector<vector<int>>E;
};
graph_t G;
int m;

void approx_vertex_cover()
{
	vector<int>C;
	vector<vector<int>>El=G.E;
	
	for(int u=0;u<G.V;u++)//passa por cada lista de adjacencia
	{
		while(!G.E[u].empty()) {
			int v=G.E[u].front();
			C.push_back(u); C.push_back(v);
			G.E(u).clear();
			G.E(v).clear();
		}	
	}

	for(int c:C)cout<<c<<" ";
	cout<<"\n";
}//CLRS 35.1 The vertex-cover problem

int main()
	
	G.V=4;
	G.E.resize(G.V);
	
	G.E[0].push_back(1);
	G.E[1].push_back(0);
	G.E[2].push_back(3);
	G.E[3].push_back(2);
	
	approx_vertex_cover();

	return(0);
}
