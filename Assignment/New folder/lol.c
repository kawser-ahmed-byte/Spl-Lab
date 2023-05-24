#include<stdio.h>
struct student {
    char name[20];
    char id[9];
    float marks[3][4];
    float cgpa;
};

typedef struct student students[10];

void print(struct student *students){
    FILE *ptr;
    ptr = fopen("input.txt", "r");

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
        fgetc(ptr);
        }

    FILE *ptr2;
    ptr2 = fopen("output.txt","w");

     for(int i = 0; i < 10; i++) {
        fflush(stdout);
        fprintf(ptr2, "Student-%d:\n", i+1);
        fprintf(ptr2, "Name: %s", students[i].name);

        fflush(stdout);
        fprintf(ptr2, "Id: %s", students[i].id);

        for(int j = 0; j < 3; j++) {
                fflush(stdout);
                fprintf(ptr2, "Subject %d marks: ", j+1);
            for(int k = 0; k < 4; k++) {
                fflush(stdout);
                fprintf(ptr2, " %.f ", students[i].marks[j][k]);
            }
            fflush(stdout);
            fprintf(ptr2, "%s", "\n");
        }

        fflush(stdout);

        fprintf(ptr2, "CGPA: %.2f", students[i].cgpa);

        fflush(stdout);
        fprintf(ptr2, "%s", "\n\n");

    }

}


void printtotal(struct student *students){
    FILE *ptr;
    ptr = fopen("input.txt", "r");
    int total = 0;

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
        fgetc(ptr);
        }

    FILE *ptr2;
    ptr2 = fopen("output.txt","w");

     for(int i = 0; i < 10; i++) {
        fflush(stdout);
        fprintf(ptr2, "Student-%d:", i+1);

        for(int j = 0; j < 3; j++) {
            if(j!=0) {
            fflush(stdout);
            fprintf(ptr2,"%s", "          ");
            }
                fflush(stdout);
                fprintf(ptr2, "Subject %d total:" , j+1);
            for(int k = 0; k < 4; k++) {
                total+= students[i].marks[j][k];
            }

            fflush(stdout);
            fprintf(ptr2,"%d\n", total);
            total=0;
        }

        fflush(stdout);
        fprintf(ptr2, "%s", "\n\n");

    }
}

void floatmaxCGPA(struct student *students){
    FILE *ptr;
    ptr = fopen("input.txt", "r");

    float max = 0.00, min = 5.00;

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
        fgetc(ptr);
        }

    FILE *ptr2;
    ptr2 = fopen("output.txt","w");

        fflush(stdout);
        fprintf(ptr2, "Maximum CGPA: ");

        for(int i = 0; i < 10; i++) {

        if(students[i].cgpa > max){
            max = students[i].cgpa;
        }
    }

        fprintf(ptr2, "%.1f", max);

        fflush(stdout);
        fprintf(ptr2, "\nMinimum CGPA: ");

        for(int i = 0; i < 10; i++) {

        if(students[i].cgpa < min){
            min = students[i].cgpa;
        }
    }
        fprintf(ptr2, "%.1f", min);
}

void main() {

    struct student students[10];

    /// Kindly Comment out the function you want to use...///
    //print(students);
    //printtotal(students);
    //floatmaxCGPA(students);

}
