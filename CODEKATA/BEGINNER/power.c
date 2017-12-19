#include<stdio.h>
int main()
{
int result=1,base,exponent;
scanf("%d",&base);
scanf("%d",&exponent);
while(exponent!=0)
{
result=result*base;
exponent--;
}
printf("%d",result);
}
