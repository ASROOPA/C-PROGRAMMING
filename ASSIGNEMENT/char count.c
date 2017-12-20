#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int length,i,j,count;
	gets(s);
	length=strlen(s);
	for(i=0;i<length;i++)
	{
	count=1;
	if(s[i]=='@')
	continue;
	for(j=i+1;j<length;j++)
	{
		if(s[i]==s[j])
		{
			count++;
			s[j]='@';
		}
	}
	printf("%c occured %d times\n",s[i],count);
	}
return 0;	
}
