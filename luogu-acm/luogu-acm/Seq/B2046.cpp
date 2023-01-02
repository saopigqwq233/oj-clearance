#include<stdio.h>
#define op_t 27
#define lk_t 23
int main()
{
	void compare(float*);
	float len,*lon;
	scanf("%f",&len);
	lon=&len;
	compare(lon);
	return 0;
}
void compare(float*lon)
{
	float bike,walk;
	bike=*lon/3+op_t+lk_t;
	walk=*lon/1.2;
	if(bike>walk)
	printf("Walk");
	if(bike<walk)
	printf("Bike");
	if(bike==walk) printf("All");
}

