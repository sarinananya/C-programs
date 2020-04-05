#include <stdio.h>
//program for swapping two numbers without using third variable
int main()
{
	int a,b;
	printf("a:");
	scanf("%d",&a);
	printf("\tb:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping\n");
	printf("a:%d\n\tb:%d",a,b);
	return 0;
}
