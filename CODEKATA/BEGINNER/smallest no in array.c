#include <stdio.h>
#include<string.h>
int main(void) 
{
int a[10],i,n,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(min>a[i])
	{
		min=a[i];
	}
}
printf("%d",min);
return 0;
}
