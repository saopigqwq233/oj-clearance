#include<stdio.h>
int main()
{
	int n,N[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&N[i]);
	}
	for(int i=0;i<n;i++)
	{
		int out=0;
		for(int j=0;j<=i-1;j++)
		{
			if(N[j]<N[i])out++;
		}
		printf("%d ",out);
	}
	return 0;
}
