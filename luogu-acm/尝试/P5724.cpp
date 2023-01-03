#include<stdio.h>
int main()
{
	int input,a[100]={0};
	scanf("%d",&input);
	for(int i=0;i<input;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	for(int i=0;i<input;i++)
	{
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	printf("%d",max-min);
	return 0;
}
