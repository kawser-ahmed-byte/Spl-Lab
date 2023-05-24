#include<stdio.h>
struct student{

    char name[100];
    int id;
    float cgpa;

};
int main()
{
    struct student s1, s2;
    printf("Enter your Name: \n");
    gets(s1.name);
    printf("Enter your Student ID: \n");
    scanf("%d", &s1.id);
    printf("Enter your CGPA: \n");
    scanf("%f", &s1.cgpa);

    printf("\n");

    printf("Enter your Name: \n");
    fflush(stdin);
    gets(s2.name);
    printf("Enter your Student ID: \n");
    scanf("%d", &s2.id);
    printf("Enter your CGPA: \n");
    scanf("%f", &s2.cgpa);

    printf("\n");
    printf("Name is : %s\n", s1.name);
    printf("Student Id is : %d\n", s1.id);
    printf("CGPA is : %f\n", s1.cgpa);

    printf("\n");

    printf("Name is : %s\n", s2.name);
    printf("Student Id is : %d\n", s2.id);
    printf("CGPA is : %f\n", s2.cgpa);

}

