#include <stdio.h>
#include <math.h>
int main()
{
	int roll;
	double maths, english, nepali, social, computer, totalmarks,percentage;
	char name[50], faculty[50], email[50], gender[50];

	printf("Enter your Roll Number: \n");
	scanf("%d", &roll);

	printf("Enter your Name: \n");
	scanf("%s", &name);

	printf("Enter your Faculty: \n");
	scanf("%s", faculty);
	
	printf("Enter your Email: \n");
	scanf("%s", &email);


	printf("Enter your Gender: \n");
	scanf("%s", &gender);

	printf("Enter the Marks of Subjects: \n");
	printf("1. Maths\n2. English\n 3. Nepali\n 4. Social \n5. Computer\n");
	scanf("%lf%lf%lf%lf%lf", &maths, &english, &nepali, &social, &computer);
	
	totalmarks = maths+english+nepali+social+computer;
	percentage = (totalmarks/500.0)*100;


printf("Student name: %s",name);
	printf("\n");
	printf("Student Roll: %d",roll);
	printf("\n");
	printf("Student Faculty: %s",faculty);
	printf("\n");
	printf("Student Email: %s",email);
	printf("\n");
	printf("Student Gender: %s",gender);
	printf("\n");
	printf("Total marks: %lf",totalmarks);
	printf("\n");
	printf("Percentage: %lf",percentage);
	printf("\n");
	
	
		if((maths<30)||(english<30)||(nepali<30)||(social<30)||(computer<30))
	{
		printf("Result Status: Failed");
		printf("\n");
	}
	else
	{
		printf("Result Status: Passed");
		printf("\n");
	}
	
}

