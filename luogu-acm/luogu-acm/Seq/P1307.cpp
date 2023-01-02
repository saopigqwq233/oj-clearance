#include<stdio.h>
#include<math.h>
int main()
{
	int input,newed=0;
	scanf("%d",&input);
	for(;fabs(input)>0;)
	{
		newed=newed*10+input%10;
		input/=10;
	}
	printf("%d",newed);
	return 0;
}
