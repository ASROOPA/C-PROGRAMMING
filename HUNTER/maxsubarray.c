#include<stdio.h>
int main(void)
{
	int i,j,k,a[100],sum,max=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			sum=0;
			for(k=i;k<=j;k++)
			{
				//printf("%d ",a[k]);
				sum=sum+a[k];
			}
			//printf("\n");
			if(sum>max)
			{
				max=sum;
				//printf("%d\t",max);
			}
		}
	}
	printf("\n%d",max);
	return 0;
}
