#include<stdio.h>
void main()
{
int a,sum=0,i,n;
scanf("%d",&a);
printf("\nenter no of terms required by user");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+a;
a=(a*10)+9;
}
printf("\nsum is %d",sum);
}
