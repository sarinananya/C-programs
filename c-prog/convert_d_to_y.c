//converting no of days to years,weeks,days
#include<stdio.h>
int main()
{
	int ndays,years,weeks,days;
	printf("days:");
	scanf("%d",&ndays);
	years=ndays/365;
	weeks=(ndays%365)/7;
	days=(ndays%365)%7;
	printf("%ddays is equivalent to %dyears,%dweeks,%ddays",ndays,years,weeks,days);
	return
}