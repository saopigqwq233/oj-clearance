#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int input;
	cin>>input;
	int n=1;
	for(int i=0;i<input;i++)
	{
		for(int a=1;a<=input-i;a++)
		{
			cout<<setfill('0')<<setw(2)<<n;
			n++;
		}
		cout<<endl;
	}
	return 0;
}
