#include <stdio.h>
int main(void) {
	int n,a[100],i,j,temp,b[100],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
		b[i]=a[i];
		count++;
		}
	}
	for(i=0;i<count;i++)
	{
		if(b[i]>b[i+1])
		{
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
