#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[50];
    char ID[10];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} S;

char getGrade(float score) {
    if (score >= 80) return 'A';
    else if (score >= 75) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 65) return 'D';
    else return 'F';
}

const char* getGradeText(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

int main() {
    S student[3];
    int i;

    printf("Enter the details of 3 students :\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", student[i].Name);
        printf("ID: ");
        scanf(" %s", student[i].ID);
        printf("Scores in Subject 1: ");
        scanf("%f", &student[i].ScoreSub1);
        printf("Scores in Subject 2: ");
        scanf("%f", &student[i].ScoreSub2);
        printf("Scores in Subject 3: ");
        scanf("%f", &student[i].ScoreSub3);
        printf("Scores in Subject 4: ");
        scanf("%f", &student[i].ScoreSub4);
        printf("Scores in Subject 5: ");
        scanf("%f", &student[i].ScoreSub5);
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        float avg = (student[i].ScoreSub1 + student[i].ScoreSub2 + student[i].ScoreSub3 +
                     student[i].ScoreSub4 + student[i].ScoreSub5) / 5.0;

        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", student[i].Name);
        printf("ID: %s\n", student[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
               student[i].ScoreSub1, student[i].ScoreSub2, student[i].ScoreSub3,
               student[i].ScoreSub4, student[i].ScoreSub5);

        printf("Grades: %s %s %s %s %s\n",
               getGradeText(student[i].ScoreSub1),
               getGradeText(student[i].ScoreSub2),
               getGradeText(student[i].ScoreSub3),
               getGradeText(student[i].ScoreSub4),
               getGradeText(student[i].ScoreSub5));

        printf("Average Scores: %.1f\n\n", avg);
    }

    return 0;
}