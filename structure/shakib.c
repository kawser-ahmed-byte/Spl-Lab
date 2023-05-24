#include<stdio.h>
struct player{
    char name[100];
    char country[100];
    int runs[100];
    int wickets[100];
    int points[100];
};
void main()
{
    int n,i,j,k;
    printf("Enter Number of Players: ");

    scanf("%d", &n);
    struct player information[n];

    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter Player %d name: ", i+1);
        gets(information[i].name);

        fflush(stdin);
        printf("Enter player %d Country name: ", i+1);
        gets(information[i].country);

        {
            for(j = 0; j < 3; j++)
            {
                fflush(stdin);
                printf("\n Enter player %d match number %d runs: ", i+1, j+1);
                scanf("%d", &information[i].runs[j]);
            }
             for(j = 0; j < 3; j++)
            {
                fflush(stdin);
                printf("\n Enter player %d match number %d wickets: ", i+1, j+1);
                scanf("%d", &information[i].wickets[j]);
            }
             for(j = 0; j < 3; j++)
             {
                 int point = 0;

                if(information[i].runs[j] <= 25)
                {
                    point +=5;
                }
                if(information[i].runs[j] > 25 && information[i].runs[j] <= 50)
                {
                    point += 10;
                }
                if(information[i].runs[j] > 50 && information[i].runs[j] <= 75)
                {
                    point += 15;
                }
                if(information[i].runs[j] > 75)
                {
                    point += 20;
                }

                point += information[i].wickets[j] * 12;
                information[i].points[j] = point;
             }
        }
    }
     for(i = 0; i < n; i++)
     {
        printf("Player'S Info: ");
        fflush(stdout);
        printf("\n Player %d Name: %s", i+1, information[i].name);

        fflush(stdout);
        printf("\n Player %d Name: %s", i+1, information[i].country);


            for(j = 0; j < 3; j++)
            {
                fflush(stdout);
                printf("\n Player %d Match Number %d runs: %d", i+1, j+1, information[i].runs[j]);

            }
            for(j = 0; j < 3; j++)
            {
                fflush(stdout);
                printf("\n Player %d Match Number %d Wickets: %d", i+1, j+1, information[i].wickets[j]);
            }
            for(j = 0; j < 3; j++)
            {
                fflush(stdout);
                printf("\n Player %d Match Number %d Points: %d", i+1, j+1, information[i].points[j]);
            }
            puts("");
            puts("");
     }

     int sum_points_of_all_players[n];
     int sum = 0;

     for(i = 0; i < n; i++)
     {
         sum = 0;
         for(j = 0; j < 3; j++)
            {
            sum += information[i].points[j];
            }
         sum_points_of_all_players[i] = sum;
     }
     int max = sum_points_of_all_players[0];
     int index = 0;

     for(i = 0; i < n; i++)
     {
         if(max < sum_points_of_all_players[i])
         {
             max = sum_points_of_all_players[i];
             index = i;
         }
     }
     printf("Man of the series: %s\n", information[index].name);

}
