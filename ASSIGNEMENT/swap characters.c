#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[20],temp;
	int i,length;
	gets(s);
	length=strlen(s);
	if(length%2==0)
	{
	for(i=0;i<strlen(s);i+=2)
	{
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
	}
	printf("%s",s);
	}
	else
	{
		for(i=0;i<length-1;i++)
		{
			temp=s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
		}
		printf("%s",s);
		printf("%s",s[i-1]);
	}
	return 0;
}
