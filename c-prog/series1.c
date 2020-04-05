int fact(int);//function prototype
#include<stdio.h>
int main()
{
	int i,n;
	double sum=0;
	printf("\nenter the value of n:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=(double)i/fact(i);//used datatype here for accurate answer
	}
	printf("\nthe sum of series\n");
	for(i=1;i<=n;i++){
		if(i<n)
			printf("%d/%d! +",i,i);
		else
			printf("%d/%d!",i,i);
	}
	printf("\nis:");
	printf("%lf",sum);
}
int fact(int a)//function definition
{
	if(a==0)
		return 1;
	else 
		return a*fact(a-1);
	
}
