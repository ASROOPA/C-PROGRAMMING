#include <stdio.h>
int main(void) {
	int n,a[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
				if(a[i]+a[j]==0)
				{
					printf("%d+%d=0\n",a[i],a[j]);
				}
		}
	}
	return 0;
}
