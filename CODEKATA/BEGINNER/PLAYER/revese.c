#include<stdio.h>
#include<string.h>

int main(void) {
	char a[100];
	int i,length;
	gets(a);
	length=strlen(a);
	for(i=length;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
