#include<stdio.h>
int count=1;
void f1();
void main()
{
int count=0;
do
{
int count=2;
printf("\ncountvalue inside block is %d",count);
}while(count=0);
printf("\nlocal count value is %d",count);
f1();
}
void f1()
{
printf("\nglobal count value is %d",count);
}
