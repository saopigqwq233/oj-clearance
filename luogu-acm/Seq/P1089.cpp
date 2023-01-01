#include<stdio.h>
#define N 300
//月初+300元
//月初-（预算）元
//大于100，-100元//大于200，-200元//大于300，-300元//剩余/100=q，-q*100元
//某月+300后，-预算后，<0，输出-这个月份
//12月初+300-预算+存储的钱*1.2
int main()
{
	int precost[12],hand=0,bank=0;
	for(int i=0;i<12;i++)
	{
		scanf("%d",&precost[i]);
	}
	int n=1;
	for(int i=0;i<12;i++)
	{
		hand=hand+N-precost[i];
		//printf("第%d月减去预算还剩余%d\n",i+1,hand);
		if(hand<0)
		{
			n=0;
			printf("-%d",i+1);
			break;
		}
		if((hand/100)>0)
		{
			bank=bank+hand/100*100;
			hand=hand-hand/100*100;
		}
		if(i==11)
		{
			hand=hand+bank*1.2;
		}
	}
	if(n==1)
	{
		printf("%d",hand);
	}
	return 0;
} 
