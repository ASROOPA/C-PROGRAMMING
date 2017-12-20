#include<stdio.h>
int main(void)
{
	int n,i,sum=0,sum1=1;
	scanf("%d",&n);
	printf("%d\n",sum);
	printf("%d\n",sum1);
	for(i=0;i<n;i++)
	{
		sum=sum+sum1;
		printf("%d\n",sum);
	}
	return 0;
}
	
