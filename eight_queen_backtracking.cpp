#include<bits/stdc++.h>
using namespace std;

int n=8;
vector<int>permutation;
int chosen[9]; // column
int d1[15];
int d2[15];

void search(int y=0)
{
  if(y==n) {
    for(int i=0;i<n;i++)cout<<permutation[i]<<" ";
    cout<<endl;
    return;
  }
  for(int x=0;x<n;x++) {
	if(chosen[x]||d1[x+y]||d2[x-y+n-1])continue; //poda logo aqui
	chosen[x]=d1[x+y]=d2[x-y+n-1]=1;
	permutation.push_back(x);
	search(y+1);
	chosen[x]=d1[x+y]=d2[x-y+n-1]=0;
	permutation.pop_back();
   }
}

int main()
{
    for(int i=0;i<15;i++)
	d1[i]=d2[i]=0;
    for(int i=0;i<9;i++)
	chosen[i]=0;
    search();
    return(0);
}
