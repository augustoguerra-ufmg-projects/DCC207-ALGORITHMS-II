#include<bits/stdc++.h>
using namespace std;

int n=3;	//tamanho
vector<int>permutation;
int chosen[9];

void search()
{
    if(permutation.size()==n) {
	for(int i=0;i<n;i++)
	    cout<<permutation[i]<<" ";
	cout<<endl;
    }
    else {
	for(int i=1;i<=n;i++) {
	    if(chosen[i])continue;
	    chosen[i]=1;
	    permutation.push_back(i);
	    search();
	    chosen[i]=0;
	    permutation.pop_back();
	}
    }
}

int main()
{
    for(int i=0;i<=n;i++)
	chosen[i]=0;
    search();
    return(0);
}
