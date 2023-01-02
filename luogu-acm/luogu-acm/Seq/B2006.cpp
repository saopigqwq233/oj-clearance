#include<stdio.h>
//可持续发展，意味着增加多少，消耗多少； 
//增长速度v=(by-ax)/(b-a);
//每年消耗速度即为 

int main()
{
	int x,a,y,b;
	scanf("%d%d%d%d",&x,&a,&y,&b);
	printf("%.2f",1.0*(b*y-a*x)/(b-a));
	return 0;
}
