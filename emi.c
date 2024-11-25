#include<stdio.h>
#include<conio.h>
float emi(int amount,int intrest,int month)
{
	float total=amount+(amount*intrest)/100;
	float emi= total/month;
	return emi;
}
int main()
{
	float calc=emi(100000,4,24);
	printf("your monthly emi is %.2f/-",calc);	
}