#include<stdio.h>
int main()
{
int reverse=0,original,n,remainder;
scanf("%d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
reverse=(reverse*10)+remainder;
n=n/10;
}
if(original==reverse)
{
printf("%d is palindrome",original);
}
else
{
printf("%d is not a palindrome",original);
}
return 0;
}
