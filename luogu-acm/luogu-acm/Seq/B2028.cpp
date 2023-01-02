#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int h,s,g;
	h=x/100;
	s=x/10-h*10;
	g=x-h*100-s*10;
	printf("%d%d%d",g,s,h);
	return 0;
}
