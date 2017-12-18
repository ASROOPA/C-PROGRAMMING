#include <stdio.h>
int sum(int num);
void main()
{
    int i,n;
    scanf("%d",&n);
    i=sum(n);
    printf("%d",i);
}
int sum(int num)
{
    if((num==0 || num==1))
    {
        return num;
    }
    else
    {
        return num+sum(num-1);
    }
}



