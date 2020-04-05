int fact(int);
#include<stdio.h>
int main(){
	int n,factorial;
	printf("\nn:\t");
	scanf("%d",&n);
	factorial=fact(n);
	printf("factorial is %d",factorial);
}
int fact(int n)
{
	if(n==0)
		return 1;
	else 
		return n*fact(n-1);
	
}
