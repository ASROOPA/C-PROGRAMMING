#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100],c[100];
	int i,j=0,length;
	gets(s);
	length=strlen(s);
	for(i=length-1;i>=0;i--)
	{
	printf("%c",s[i]);
	}
	for(i=length-1;i>=0;i--)
	{
	if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
	{
		s[i]=' ';
	}
	else
	{
		c[j++]=s[i];
	}
	}
	c[j]='\0';
	printf("\n%s",c);
	return 0;
}
