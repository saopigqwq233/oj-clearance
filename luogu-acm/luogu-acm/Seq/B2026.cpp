#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);//lf前面不要忘记了% 
	double r,k;
	k=a/b;//两个小数做不了取余运算 
	r=a-(int)k*b;
	printf("%lf",r);
	return 0; 
}
