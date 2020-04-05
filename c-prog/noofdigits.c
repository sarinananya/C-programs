#include<stdio.h>
int main(){
	int n,no;
	printf("a 3 digit no:\t\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		no++;
	}
	printf("\nnumber of digits is %d",no);
}
