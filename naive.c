#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int naive(char* P,char* T,int m,int n)
{
	for(int s=0;s<=(n-m);s++) //s e o shift pode variar nesse intervalo 1 a (n-m)+1 mas usamos base zero nesse caso
	{
		int k;
		for(k=0;k<m;k++)
		{
			if(T[s+k]!=P[k])
				break;
		}
		if(k==m)return(s);
	}
	return(-1);
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	char* P=(char*)malloc((m+1)*sizeof(char));
	char* T=(char*)malloc((n+1)*sizeof(char));
	scanf("%s",P);
	scanf("%s",T);
	printf("%d\n",naive(P,T,m,n));
	free(P);
	free(T);
	return(0);
}
