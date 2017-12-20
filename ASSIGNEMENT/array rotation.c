#include <stdio.h>
void rotation(int a[],int,int);
void rotate(int a[],int);
int main(void)
{
	int n,k,a[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	rotation(a,n,k);
	for(i=0;i<n;i++)
	{
	printf("\n %d",a[i]);
	}
	return 0;
}
void rotate(int ar[],int n)
{
	int i,temp;
	temp=ar[0];
	for(i=0;i<n-1;i++)
	{
		ar[i]=ar[i+1];
	}
	ar[i]=temp;
}
void rotation(int arr[],int n,int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		rotate(arr,n);
	}

}
