#include<stdio.h>
#define Num_of_student 5
#define Num_of_marks 3

struct student
{
    char name[100];
    char id[100];
    float cgpa;
    float marks[Num_of_marks];

};

int main(void)
{
    struct student st[Num_of_student];
    float maxTotalMarks = 0;
    int maxTotalMarksIndex = 0;

    for(int i=0; i<Num_of_student; i++)
    {
        printf("Enter name:");
        fflush(stdin);
        gets(st[i].name);
        printf("Enter id:");
        fflush(stdin);
        gets(st[i].id);
        printf("Enter cgpa:");
        scanf("%f",&st[i].cgpa);
        printf("Enter exam marks:");

        for(int j=0; j<Num_of_marks; j++)
        {
            scanf("%f",&st[i].marks[j]);
        }
    }

    printf("\n");

    for(int i=0; i<Num_of_student; i++)
    {

        puts(st[i].name);
        puts(st[i].id);
        printf("%.2f\n",st[i].cgpa);
        for(int j=0; j<Num_of_marks; j++)
        {
            printf("%f\n",st[i].marks[j]);

        }
         printf("\n");

    }
     printf("\n");

     for(int i =0; i<Num_of_student; i++)
     {
         float totalMarks=0;
         float avgMarks;

         for(int j =0; j<Num_of_marks; j++)
         {
             totalMarks += st[i].marks[j];
         }

         avgMarks = totalMarks/Num_of_marks;
         printf("Student %d: %f\n", i+1, avgMarks);

         if(totalMarks>maxTotalMarks)
         {
             maxTotalMarks = totalMarks;
             maxTotalMarksIndex=i;
         }
     }
     printf("\nName: %s\n",st[maxTotalMarksIndex].name);
      printf("\nID: %s\n",st[maxTotalMarksIndex].id);


    return 0;
}

