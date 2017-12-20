#include<stdio.h>
int main(void)
{
	int n,i,sum=0,sum1=1,sum2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",sum);
		sum2=sum+sum1;
		sum=sum1;
		sum1=sum2;
	}
	return 0;
}
	
