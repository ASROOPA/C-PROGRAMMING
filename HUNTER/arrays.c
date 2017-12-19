#include<stdio.h>
int main()
{
int a[100],b[100],c[100],i,j,k,n,m,q;
//input
printf("\n enter 1st array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter 2nd array size");
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
//merging
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<m;i++)
{
c[i]=b[i];
}
for(i=m,j=0;j<n,i<m+n;i++,j++)
{
c[i]=a[j];
}
//output
for(i=0;i<n+m;i++)
{
printf("\n %d",c[i]);
}
return 0;
}
