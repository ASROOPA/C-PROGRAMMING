#include<stdio.h>
#include<math.h>
int main()
{
int num,rem=0,sum=0,power=0,temp,digits;
scanf("%d %d",&digits,&num);
temp=num;
while(num!=0)
{
rem=num%10;
power=round(pow(rem,digits));
sum=sum+power;
num=num/10;
}
if(sum==temp)
{
printf("armstrong number");
}
else
{
printf("not an  armstrong numbers");
}
return 0;
}
