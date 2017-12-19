#include <stdio.h>
int main()
{
int i, j, start, end,flag;
scanf("%d", &start);
scanf("%d", &end);
if(start < 2) 
start = 2;
for(i=start; i<=end; i++)
{
flag = 1; 
for(j=2; j<=i/2; j++)
{
if(i%j==0)
{
flag = 0;
break;
}
if(flag==1)
{
printf("%d\n ", i);
}
}
return 0;
}
