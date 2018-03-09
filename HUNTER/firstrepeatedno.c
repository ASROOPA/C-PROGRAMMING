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
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[0]=a[i];
				count1++;
			}
		}
	}
	if(count1>0)
	{
		printf("%d",b[0]);
	}
	else
	{
		printf("unique");
	}
	
	return 0;
}
