#include<stdio.h>
int main(void)
{
	int n,temp,temp1;
	scanf("%d",&n);
	temp=n/60;
	temp1=n%60;
	printf("%d %d",temp,temp1);
	return 0;
}
