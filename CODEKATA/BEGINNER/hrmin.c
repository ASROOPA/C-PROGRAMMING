#include<stdio.h>
int main(void)
{
	int min1,min2,hr1,hr2,hr3,min3;
	scanf("%d%d",&hr1,&min1);
	scanf("%d%d",&hr2,&min2);
	if(hr1>hr2)
	{
		hr3=hr1-hr2;
	}
	else
	{
		hr3=hr2-hr1;
	}
	if(min1>min2)
	{
		min3=min1-min2;
	}
	else
	{
		min3=min2-min1;
	}
	printf("%d %d",hr3,min3);
	return 0;
}
