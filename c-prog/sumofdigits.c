#include<stdio.h>
int main(){
	int num,no,sum=0,x,temp;
	printf("a 6 digit no:\t\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		temp=temp/10;//removing each digit
		no++;//counts the no of digits..by the no of times loop works and digits get removed
	}
	if(no==6){
		while(num!=0){
			x=num%10;//extracting each digit
			sum=sum+x;//adding each digit to the sum
			num=num/10;//removing the digit one by one
			
		}
	
		
	}
	else{
		printf("\nplease enter a 6 digit number");
	}
	printf("sum of digits is %d",sum);
	return 0;
}
	
