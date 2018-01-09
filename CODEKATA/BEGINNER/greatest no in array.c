#include <stdio.h>
#include<string.h>
int main(void) 
{
int a[10],i,n,max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(max<a[i])
	{
		max=a[i];
	}
}
printf("%d",max);
}
