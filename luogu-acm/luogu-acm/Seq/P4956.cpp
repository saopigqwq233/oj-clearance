//输入筹集n元
//每周需要 N元=n/52 
//每周攒钱7x+21k=N
//让x从最大开始循环 
//嵌套 k 从最小开始往上
#include<stdio.h>
int main()
{
	int n,N,x=100,k;
	scanf("%d",&n);
	N=n/52;
	for(x=100;x>0;x--)
	{
		for(k=1;21*k<N;k++)
		{
			if(7*x+21*k==N)break;
			else continue;
		}	
		if(7*x+21*k==N)break;
	}
	printf("%d\n%d",x,k);
	return 0;
} 
 
