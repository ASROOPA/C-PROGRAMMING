#include<stdio.h>
int large(int array[],int n);
int main()
{
int array[20],i,n,largest1;
printf("\n enter the array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
largest1=large(array,n);
printf("\n %d",largest1);
return 0;
}
int large(int array[],int n)
{
int i,largest;
largest=array[0];
for(i=0;i<n;i++)
{
if(largest<array[i])
{
largest = array[i];
}
}
return largest;
}
