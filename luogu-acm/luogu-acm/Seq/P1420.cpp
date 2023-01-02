#include<stdio.h>
/*循环嵌套，外循环记录连号的个数，内循环经行每一段连号的判断，当下一个数不等于上一个数的+1
结束内循环，进入新数组储存下一段连号*/
/*int main()
{
	int input,a[10000]={0},b[1000];
	for(int i=0;i<1000;i++)
	b[i]=1;
	scanf("%d",&input);
	for(int i=0;i<input;i++)
	{
		scanf("%d",&a[i]);
	}
	//printf("%d",a[6]);
	int y=0;
	for(int bb=0;bb<1000;bb++)
	{
		for(;y<input;y++)
		{
			if(a[y+1]==(a[y]+1)) b[bb]=b[bb]+1;
			if(a[y+1]!=(a[y]+1))
			{
				y++;
				break;
			}
		}
	}
	int max=b[0];
	for(int x=0;x<input;x++)
	{
		if(max<b[x])max=b[x];
	}
	printf("%d",max);
	return 0;
}*/
int main()
{
	int input,ans=0,max=1;
	scanf("%d",&input);
	int n1,n2;
	scanf("%d",&n1);
	for(int i=0;i<input-1;i++)
	{
		scanf("%d",&n2);
		if(n2==(n1+1))max++;
		else max=1;
		if(ans<max)ans=max;
		n1=n2;
	}
	printf("%d",ans);
	return 0;
}
