#include<stdio.h>
int main(void)
{
	int i,j,k,a[100],sum,max=0,n,count=0,temp=0,diff[100],b[100];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
		diff[count]=a[i]-k;
		count++;
		}
	}
	printf("before sort");
	for(i=0;i<count;i++)
	{
		printf("\n%d",diff[i]);
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(diff[i]>diff[j])
			{
				temp=diff[i];
				diff[i]=diff[j];
				diff[j]=temp;
			}
		}
	}
	printf("\nafter sort");
	for(i=0;i<count;i++)
	{
		
		printf("\n%d",diff[i]);
	}
	printf("\n3 neighbour");
	for(i=0;i<=2;i++)
	{
		b[i]=diff[i]+k;
		printf("\n%d",b[i]);
	}
	return 0;
}
