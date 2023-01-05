#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int l,a[1000];
	cin>>l;
	for(int i=0;i<l;i++)
	{
		cin>>a[i];
	}
	sort(a,a+l);
	double sum=0;
	for(int i=1;i<(l-1);i++)
	sum=sum+a[i];
	printf("%.2lf",sum/(l-2));
}
