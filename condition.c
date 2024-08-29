#include<stdio.h>
int main()
{
	double firstnumber,secondnumber,sum,difference,multiply,divide;
	int option;
	char input[20];
	
	do{
	printf("Menu");
	printf("\n");
	printf("1. Addition");
	printf("\n");
	printf("2. Subtraction");
	printf("\n");
	printf("3. Multiplication"); 
	printf("\n");
	printf("4. Division");
	printf("\n");
	
	printf("Enter First Number and Second Number");
	scanf("%lf%lf",&firstnumber,&secondnumber);
	printf("\n");
	
	printf("Which operation do you want to perform?");
	printf("\n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
		sum=firstnumber+secondnumber;
		printf("\n Addition=%lf",sum);
		printf("\n");
		break;
	
		case 2:
		difference=firstnumber-secondnumber;
		printf("\n Subtraction=%lf",difference);
		printf("\n");
		break;
	
		case 3:
		multiply=firstnumber*secondnumber;
		printf("\n Multiplication=%lf",multiply);
		printf("\n");
		break;
	
		case 4:
		divide=firstnumber/secondnumber;
		printf("\n Division=%lf",divide);
		printf("\n");
		break;
		
		default{
			printf("Option Not Available");
	}
	
	printf("/n");
	printf("Do you want to continue?");
	printf("/n");
	printf("Enter Y if you want to continue or N if you want to exit.");
	printf("/n");
}while(input=="y"||input =="Y");

	
	
	return 0;
}
