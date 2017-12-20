#include<stdio.h>
#include<math.h>
int main(void)
{
	int hours1,minutes1,hours2,minutes2,diff,h1,h2,total1,total2,n1,n2;
	scanf("%d %d",&hours1,&minutes1);
	scanf("%d %d",&hours2,&minutes2);
	h1=hours1*60;
	total1=h1+minutes1;
	h2=hours2*60;
	total2=h2+minutes2;
	diff=total2-total1;
	n1=diff/60;
	n2=diff%60;
	printf("difference is %dhours %d minutes",n1,n2);
	return 0;
}
