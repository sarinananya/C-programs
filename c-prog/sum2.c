#include<stdio.h>
int main(){
	int num,sum=0,x;
	printf("a 6 digit no:\t\n");
	scanf("%d",&num);
while(num!=0){
			x=num%10;//extracting each digit
			sum=sum+x;//adding each digit to the sum
			num=num/10;//removing the digit one by one
			
		}
		printf("sum of digits is %d",sum);
	}
