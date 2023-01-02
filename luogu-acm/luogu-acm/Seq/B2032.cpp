#include<stdio.h>
int main()
{
	int a1,a2,an,d,n;
	scanf("%d %d",&a1,&a2);
	d=a2-a1;
	scanf("%d",&n);
	an=a1+(n-1)*d;
	printf("%d",an);
	return 0;
}
