#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100],temp;
	int i,length;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i+2)
	{
	temp=str[i];
	str[i]=str[i+1];
	str[i+1]=temp;
	}
	printf("%s",str);
	return 0;
}
