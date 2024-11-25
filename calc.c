#include<stdio.h>
#include<conio.h>
int addition (  int value1,int value2)
{
	return value1+value2;
}
int substraction (int value1, int value2)
{
	return value1-value2;
}
int mulitipication (int value1,int value2)
{
	return value1*value2;
}
int division ( int value1,int value2)
{
	return value1/value2;
}
void main()
{
	int num1,num2,ans;
	char choice;
     
     	printf("enter num1:");
     	scanf("%d",&num1);
     	printf("enter num2:");
     	scanf("%d",&num2);
        printf("enter your choice :");
        scanf(" %c",&choice);
        switch (choice)
        
        {
        case'+':
        ans=addition(num1,num2);
		printf("addition is %d",ans);
		break;	
		case'-':
        ans=substraction(num1,num2);
		printf("substraction is %d",ans);
		break;	
		case'*':
        ans=mulitipication(num1,num2);
		printf("mulitipication is %d",ans);
		break;	
		case'/':
        ans=division(num1,num2);
		printf("division is %d",ans);
		break;
		printf("your valied choice");	
		}
     	
	 
}
