#include<stdio.h>
int main()
{
	int k,n;
	double Sn=0;
	scanf("%d",&k);
	for(n=1;Sn<=k;n++)
	{
		Sn+=(1.0/n);
	}
	printf("%d",n-1);
}
