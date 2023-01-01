//甲流确诊数 a 和死亡数 b，计算甲流在各省的死亡率。
//死亡率p=b/a 
#include<stdio.h>
int main()
{
	double a,b,p;
	scanf("%lf",&a);

	scanf("%lf",&b);

	p=b/a*100;
	printf("%.3lf%%",p);
	return 0;
}
