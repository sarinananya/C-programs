//continue:this keyword is used to skip the statement below continue statement and go to next iteration
//continue can only be used within loops !not simply in if else
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number till where you want to print the series of odd numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==1)
			printf("\n%d",i);
		/*else
		continue;*/
	}
}
