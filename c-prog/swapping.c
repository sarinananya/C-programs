//swapping using temporary variable
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter a and b:\t");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping\n");
	printf("a:%d b:%d",a,b);
	return 0;
}
