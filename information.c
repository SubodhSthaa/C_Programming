#include <stdio.h>
int main()
{
    double rollno,age;
    char name[50], address[50], email[50];
    char gender[20];
    printf("Enter your roll number: \n");
        scanf("%lf", &rollno);
    printf("Enter your name \n");
        scanf("%s", &name);
    printf("Enter your Age \n");
        scanf("%lf", &age);
    printf("Enter your address \n");
        scanf("%s", &address);
    printf("Enter your email \n");
        scanf("%s", &email);
    printf("Enter your Gender \n");
        scanf("%s", &gender);
    printf("Roll Number = %lf", rollno);
    printf("Name: %s", name);
    printf("Age: %lf", age);
    printf("Address: %s", name);
    printf("Email: %s", email);
    printf("Gender: %s", gender);

    return 0;
}
