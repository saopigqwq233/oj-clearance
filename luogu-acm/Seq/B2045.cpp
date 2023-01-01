#include<stdio.h>
int main()
{
	enum week{monday=1,tuesday,wensday,thursday,friday
	};

	int n;
	scanf("%d",&n);
	switch (n)
	{
		case 1:
		case 3:
		case 5:
			printf("no");
	}
}
