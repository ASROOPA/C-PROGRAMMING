#include<stdio.h>
int main(void)
{
	int n,a[100],i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=1;i<n;i++)
	{
		temp=temp^a[i];
	}
	printf("%d",temp);
	return 0;
}
