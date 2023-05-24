#include<stdio.h>
typedef struct {
    char name[20];
    char id[9];
    float marks[3][4];
    float cgpa;
}student;

void main() {
    FILE *ptr;
    ptr = fopen("input.txt", "r");

    student students[10];

    for(int i = 0; i < 10; i++) {
        fflush(stdin);
        fgets(students[i].name, sizeof(students[i].name)/sizeof(students[i].name[0]), ptr);

        fflush(stdin);
        fgets(students[i].id, sizeof(students[i].name)/sizeof(students[i].name[0]), ptr);

        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                fflush(stdin);

                fscanf(ptr, "%f", &students[i].marks[j][k]);
            }
        }
        fflush(stdin);
        fscanf(ptr, "%f", &students[i].cgpa);

        fflush(stdin);
        fgetc( ptr );
    }
    FILE *ptr2;
    ptr2 = fopen("output.txt","w");

    for(int i = 0; i < 10; i++) {
        fflush(stdout);
        fprintf(ptr2, "%s", students[i].name);

        fflush(stdout);
        fprintf(ptr2, "%s", students[i].id);

        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                fflush(stdout);

                fprintf(ptr2, "%.0f ", students[i].marks[j][k]);
            }
            fflush(stdout);
            fprintf(ptr2, "%s", "\n");
        }
        fflush(stdout);
        fprintf(ptr2, "%f", students[i].cgpa);

        fflush(stdout);
        fprintf(ptr2, "%s", "\n");

    }
}
