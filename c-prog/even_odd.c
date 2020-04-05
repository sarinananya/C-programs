//to check if a number is even or odd
#include<stdio.h>
int main()
{
	int number;
	printf("\tCHECK IF A NUMBER IS EVEN OR ODD");
	printf("\nplease enter the number:\t");
	scanf("%d",&number);
	if(number%2==0)
		printf("\t%d is even",number);
	else
		printf("\t%d is odd",number);
	return 0;
}
