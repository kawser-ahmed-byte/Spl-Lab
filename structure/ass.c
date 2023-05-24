#include<stdio.h>
#define N 100
struct city
{
    char name[50];
    int population;
    float area;
    int numOfCOVIDPatients;
};
void takeCitiesInfoFromKeyboard(struct city array[],int);
void findCityWithHighestCOVIDPatients(struct city array[],int);
void three(struct city array[],int);
int main()
{
    int n, flag = 0;
    struct city array[N];
    while (1)
    {
        printf("    ======= BD Covid Case Tracking System =========\n");
        printf(" Enter x to Entry number of patients in different cities.\n");
        printf(" Enter y to Display highest number of COVID cases.\n");
        printf(" Enter z to Display the patients that are less then half of highest.\n");
        printf(" Enter q to Exit the menu.\n");
        printf("\n");
        char ch;
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'x':
        {
            printf("How many cities do you want to include ?\n");
            scanf("%d",&n);
            takeCitiesInfoFromKeyboard(array,n);
            printf("information updated successfully\n");
            flag = 1;
        }
        break ;
        case 'y':
        {
            if(flag == 1)
            {
            findCityWithHighestCOVIDPatients(array,n);
            }
            else
            {
                printf("\nPlease Enter City Information First\n");
            }
            break;
        }

        case 'z':
             if(flag == 1)
            {
                displayAllCitiesInfo(array,n);
            }
            else
            {
                printf("\nPlease Enter City Information First\n");
            }

            break ;
        case 'q':
            return 0;
        default:
            printf("Invalid Input\n");
        }

    }
}


void takeCitiesInfoFromKeyboard(struct city array[],int n)
{

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the city name:(%d)\n",i+1);
        fflush(stdin);
        gets(array[i].name);

        printf("Enter the population of that city:\n");
        fflush(stdin);
        scanf("%d",&array[i].population);

        printf("Enter city's area size:\n");
        fflush(stdin);
        scanf("%f",& array[i].area);

        printf("Enter the number of COVID patients in that area:\n");
        fflush(stdin);
        scanf("%d",&array[i].numOfCOVIDPatients);
    }

}
void findCityWithHighestCOVIDPatients(struct city array[],int n)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {

        if (array[i].numOfCOVIDPatients > max)
        {
            max=array[i].numOfCOVIDPatients;
            fflush(stdout);
            printf("Name: %s\n",array[i].name);
            fflush(stdout);
            printf("Population: %d\n",array[i].population);
            fflush(stdout);
            printf("Area : %f\n",array[i].area);
            fflush(stdout);
        }


    }

    printf("Number of covid patients %d\n\n",max);

}

void displayAllCitiesInfo(struct city array[],int n)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i].numOfCOVIDPatients > max)
        {
            max=array[i].numOfCOVIDPatients;
        }

    }
    int d = max / 2;
    for (int i = 0; i < n; i++)
    {
        if (array[i].numOfCOVIDPatients < d)
        {
            printf(" City Name  - City Population -   City Area   - Num of City COVID Patients\n" );
            printf("  %s         %d              %.3f              %d         \n",array[i].name,array[i].population,array[i].area,array[i].numOfCOVIDPatients );
        }

    }
}



