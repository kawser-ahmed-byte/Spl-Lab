
#include<stdio.h>
struct student{
    char name[100];
    int id;
    float cgpa;
};
void whoisBetter(struct student s[])
{
    int max=s[0].cgpa, index=0;
    int i;
    for(i=1; i<2; i++)
    {
        if(max<s[i].cgpa)
        {
            max=s[i].cgpa;
            index=i;
        }
    }
    printf("%s\n", s[index].name);
    printf("%d\n", s[index].id);
    printf("%f\n", s[index].cgpa);
}
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

   /* for(i=0; i<2; i++)
    {
       fflush(stdin);
       printf("Name is : %s\n", s[i].name);
       printf("Student Id is : %d\n", s[i].id);
       printf("CGPA is : %f\n", s[i].cgpa);
    } */

    whoisBetter(s);
}


