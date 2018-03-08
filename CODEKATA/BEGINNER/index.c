#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d %d\n",a[i],i);	
	}
	return 0;
}
