#include<stdio.h>
unsigned int a[100];
int main()
{
	for(int i=0;i<100;i++)
    {
		scanf("%d",&a[i]);
		if(a[i]==0)break;
	}
	int n=99;
	for(;a[n]==0;n--);
	for(;n>=0;n--)printf("%d ",a[n]);
	return 0;
}
