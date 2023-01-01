#include<stdio.h>
//五个小朋友分别有糖果abcde
//1号小朋友分三份糖果，剩余a=a/3，其余两份给2号和5号，余数x1=a%3；
int main()
{
	int a,b,c,d,e;
	int x1,x2,x3,x4,x5;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	//1号分 
	x1=a%3;
	a/=3;
	b=a+b;
	e=a+e;
	//2号分 
	x2=b%3;
	b/=3;
	a=b+a;
	c=b+c;
	//3号分 
	x3=c%3;
	c/=3;
	b=c+b;
	d=c+d;
	//4号分
	x4=d%3;
	d/=3;
	c=d+c;
	e=d+e;
	//5号分
	x5=e%3;
	e/=3;
	a=e+a;
	d=e+d;
	int x=x1+x2+x3+x4+x5;
	printf("%d %d %d %d %d\n%d",a,b,c,d,e,x);
	return 0; 
}
