#include<stdio.h>
int main()
{
	int input;
	scanf("%d",&input);
	int one;
	for(int i=2;i<input;i++)
	{
		if(input%i==0){
			one=i;
			break;
		}
	}
	printf("%d",input/one);
	return 0;
}
