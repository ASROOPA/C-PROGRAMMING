#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	int i,length;
	gets(str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
	if(i==0)
	{
		if((str[i]>='a' && str[i]<='z'))
		{
			str[i]=str[i]-32;
		}
		
	
		
		continue;
	}
		if(str[i]==' ')
		{
			++i;
			if((str[i]>='a' && str[i]<='z'))
			{
			str[i]=str[i]-32;
			continue;
			}
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
			{
			str[i]=str[i]+32;
			}
		}
	}
	
	printf("%s",str);
	return 0;
}
