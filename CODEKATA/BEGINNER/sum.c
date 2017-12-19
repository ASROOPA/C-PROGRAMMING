#include <stdio.h>
int sum(int num);
int main()
{
    int i,n;
    scanf("%d",&n);
    i=sum(n);
    printf("%d",i);
    return 0;
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



