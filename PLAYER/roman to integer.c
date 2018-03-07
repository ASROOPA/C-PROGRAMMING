#include<stdio.h>
#include<string.h>
int main(void)
{
	char rom[100];
	int i,k,length,a[10];
	gets(rom);
	length=strlen(rom);
	for(i=0;i<length;i++)
	{
		if(rom[i]=='I')
		a[i]=1;
		if(rom[i]=='V')
		a[i]=5;
		if(rom[i]=='X')
		a[i]=10;
	}
	k=a[length-1];
	for(i=length-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			k=k-a[i-1];
		}
		else
		{
			k=k+a[i-1];
		}
	}
	printf("%d",k);
	return 0;
}
