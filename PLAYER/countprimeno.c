#include<stdio.h>
int main(void)
{
	int x,y,flag,n,count=0;
	scanf("%d",&x);
	scanf("%d",&y);
	while(x<=y)
	{
		flag=0;
		for(n=2;n<=x/2;n++)
		{
			if(x%n==0)
			{
				flag++;
				break;
			}
		}
	if(flag==0)
	{
	printf("%d\n",x);
	count++;
	}
	x++;
	}
	printf("%d",count);
}
