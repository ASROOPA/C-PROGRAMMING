#include<stdio.h>
int main(void)
{
	int n,m,a[100],b[100],temp,i,j,count=0,count1=1;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
