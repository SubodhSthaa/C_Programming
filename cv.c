#include<stdio.h>
int main()
{
	double rollno;
	char name[50],faculty[50],email[50],gender[10],hobbies[150];
	
	printf("Enter your Roll Number: \n");
	scanf("%lf",&rollno);
	
	printf("Enter your Name: \n");
	scanf("%s",&name);
	
	
	printf("Enter your Faculty: \n");
	scanf("%s",faculty);
	
	
	printf("Enter your Email: \n");
	scanf("%s",&email);
	
	
	printf("Enter your Gender: \n");
	scanf("%s",&gender);
	
	
	printf("Enter your Hobbies: \n");
	scanf("%s",&hobbies);
	
	
	printf("Roll Number= %lf \n",rollno);
	printf("Name = %s \n",name);
	printf("Faculty = %s \n",faculty);
	printf("E-Mail = %s \n",email);
	printf("Gender = %s \n",gender);
	printf("Hobbies = %s \n",hobbies);
	
	return 0;

	
	
}
