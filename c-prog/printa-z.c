//program to print alphabets from A-Z & a-z
#include<stdio.h>
int main()
{
	int i;
	//ascii for capital A-Z:65-90 
	for(i=65;i<=90;i++)
		printf("%c",i);
		printf("\n\n");
	//ascii small a-z:97-122
	for(i=97;i<=122;++i)
		printf("%c",i);
		printf("\n\n");
	//now printing them in reverse order
	for(i=90;i>=65;--i)
		printf("%c",i);
		
}


