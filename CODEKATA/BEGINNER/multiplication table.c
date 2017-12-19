#include<stdio.h>
int main()
{
int n,a[10],c[10],i,multiplier;
scanf("%d",&multiplier);
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i]*multiplier;	
}
for(i=0;i<n;i++)
{
printf("%d * %d =%d \n",multiplier,a[i],c[i]);	
}
}
