// backtracking de k_coloracao de grafo
#include<bits/stdc++.h>
using namespace std;
vector<int>vcolor;
int k;

struct graph_t {
    int V;
    vector<vector<int>>E;
};

graph_t G;

int promissing(int s,int color)
{
    for(int i=0;i<G.V;i++)
	if(G.E[s][i] && vcolor[i]==color)return(0);
    return(1);
}

// problema de decisao
int k_coloring(int s)
{
    if(s==G.V)return(1);
    
    for(int color=0;color<k;color++) {
	if(promissing(s,color))
	{
	    vcolor[s]=color;
	    if(k_coloring(s+1))return(1);
	}
    }

    return(0);
}

int main()
{
    cin>>G.V>>k;
    vcolor=vector<int>(G.V,-1);// ninguem foi colorido cores vao de 0 ate k-1
    G.E=vector<vector<int>>(G.V,vector<int>(G.V,0));
    
    for(int i=0;i<G.V;i++)
	for(int j=0;j<G.V;j++)
	    cin>>G.E[i][j];
    //vertex 0
    cout<<k_coloring(0)<<endl;
    return(0);
}
