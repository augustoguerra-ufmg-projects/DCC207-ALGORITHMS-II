#include<bits/stdc++.h>
using namespace std;
const int MAX=1e6;
int n,k;
int S[MAX];

//int n=7;
//int S[]={8,6,7,5,3,10,9};

int subsetsum(int T,int i)
{
    if(T==0)return(1);
    else if(T<0 || i>=n)return(0);
    
    int with=subsetsum(T-S[i],i+1);
    int wout=subsetsum(T,i+1);
    return(with||wout);
}

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>S[i];

    cout<<subsetsum(15,0)<<endl;
    return(0);
}
