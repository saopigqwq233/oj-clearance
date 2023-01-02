#include<stdio.h>
int main()
{
	int n,x,time=0;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{
		int d=i;
		for(;d>0;)
		{
			if(d%10==x)
			{
				time+=1;
			}
			d/=10;
		}
	}
	printf("%d",time);
	return 0;
}
