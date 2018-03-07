#include <stdio.h>
#include<string.h>
int main(void) {
	char s[100],a[100],i,j;
	scanf("%s",s);
	scanf("%s",a);
	for(i=0;s[i]!='\0';++j,++i)
	{
		for(j=0;a[j]!='\0';j++)
		{
			s[i]=a[j];
		}
		s[i]='\0';
	}
	printf("%s",s);
	return 0;
}
