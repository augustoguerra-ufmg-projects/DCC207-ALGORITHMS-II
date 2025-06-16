#include<bits/stdc++.h>
using namespace std;

int n=8;	//tamanho
vector<int>permutation;
int chosen[9];

void search()
{
    if(permutation.size()==n) {//ver se é valida tal permutacao
	// uma permutacao de [1,2,3,4,5,6,7,8] onde a posicao indica a coluna e o numero a linha, rainhas nao podem se cruzar
	// checar se essa permutacao completa e valida
	int valid=1;
	for(int i=0;i<n-1;i++) {
	    for(int j=i+1;j<n;j++) {
		if(abs(permutation[i]-permutation[j])==abs(i-j)) { // so garanto nas diagonais portanto
		    valid=0;
		    break;
		}
	    }
	}
	if(valid) {
	    for(int i=0;i<n;i++)cout<<permutation[i]<<" ";
	    cout<<endl;
	}
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
