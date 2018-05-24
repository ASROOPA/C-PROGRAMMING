#include<stdio.h>
int main()
{
  int array[100],length,i,j,temp,n;
  scanf("%d",&length);
  for(i=0;i<length;i++)
   {
    scanf("%d",&array[i]);
    }
  for(i=0;i<length;i++)
    {
     for(j=0;j<length-1;j++)
      {
       if(array[j]>array[j+1])
        {
         temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
         }
        }
      }
   printf("The new array is:");
   for(i=0;i<length;i++)
   {
    printf(" %d ",array[i]);
   }
   scanf("%d",&n);
   printf("\nThe %d th smallest number is: %d",n,array[n-1]);
   return 0;
}
