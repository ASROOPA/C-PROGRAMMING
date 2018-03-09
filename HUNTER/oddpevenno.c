#include <stdio.h>
int main(void) {
	int n,a[100],b[100],i,j,count1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if((i%2)==0)
		{
			if((a[i]%2)!=0)
			{
				printf("%d\n",a[i]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if((i%2)!=0)
		{
			if((a[i]%2)==0)
			{
			printf("%d\n",a[i]);
			}
		}
	}
	
	return 0;
}
