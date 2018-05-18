#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[100],temp;
	int i,j,k,len;
	scanf("%[^\n]s",str);
	len=strlen(str);
	for(i=0,j=0;j<len;j++)
	{
		if(str[j]==' ')
		{
			if(j<len-1)
			{
				k=j-1;
			}
			else
			{
				k=j;
			}
			while(i<k)
			{
				temp=str[i];
				str[i]=str[k];
				str[k]=temp;
				i++;
				k--;
			}
			i=j+1;
		}
	}
	printf("%s",str);
	return 0;
}
