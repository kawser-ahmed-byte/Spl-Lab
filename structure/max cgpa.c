#include<stdio.h>
#include<conio.h>

struct student{
    char name[100];
    int id;
    float cgpa;
};

int main()
{
    struct student s[2];
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

    float max=s[0].cgpa;

    for(i=0; i<2; i++) // finding out the max cgpa holder
    {
        if(s[i].cgpa==max)
            max=s[i].cgpa;
    }

    for(i=0; i<2; i++)  // printing out the max cgpa holder info.
    {
    if(max==s[i].cgpa){
       fflush(stdin);
       printf("Name is : %s\n", s[i].name);
       fflush(stdin);
       printf("Student Id is : %d\n", s[i].id);
       fflush(stdin);
       printf("CGPA is : %.2f\n", s[i].cgpa);
    }

    }

}

