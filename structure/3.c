#include<stdio.h>
struct student{
    char name[100];
    int id;
    float cgpa;
};
int main()
{
    struct student s[21];
    int i;
    for(i=0; i<2; i++)
    {
         printf("Enter your Name: \n");
         fflush(stdin);
         gets(s[i].name);
         printf("Enter your Student ID: \n");
         fflush(stdin);
         scanf("%d", &s[i].id);
         printf("Enter your CGPA: \n");
         fflush(stdin);
         scanf("%f", &s[i].cgpa);
    }

    for(i=0; i<2; i++)
    {
       fflush(stdin);
       printf("Name is : %s\n", s[i].name);
       printf("Student Id is : %d\n", s[i].id);
       printf("CGPA is : %f\n", s[i].cgpa);
    }

}


