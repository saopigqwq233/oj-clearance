#include<stdio.h>
#include<math.h>
int main()
{
	double eFn=0,p1=1,p2=1,usu=sqrt(5.0);
	int input;
	scanf("%d",&input);
	for(int i=0;i<input;i++)
	{
		p1*=((1+usu)/2.0);
		p2*=((1-usu)/2.0);
	}
	eFn=p1-p2;
	printf("%.2lf",eFn/usu);
	return 0;
}
