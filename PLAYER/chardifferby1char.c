#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[100],str2[100];
	int i,j,length1,length2,count=0;
	scanf("%s",str1);
	scanf("%s",str2);
	length1=strlen(str1);
	length2=strlen(str2);
	for(i=0;i<length1;i++)
	{
		for(j=0;j<length2;j++)
		{
			if(str1[i]!=str2[j])
			{
				count++;
			}
		}
	}
	if(count==(length1+length2)-1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
