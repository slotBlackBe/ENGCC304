#include <stdio.h>
#include <ctype.h> // เอามาตรวจสอบตัวอักษร

void countWordsInFile(char filename[], int *wordCount) {
    FILE *fp;
    char ch;
    int inWord = 0;

    *wordCount = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file '%s'\n", filename);
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            (*wordCount)++;
        }
    }

    fclose(fp);
}

int main() {
    char filename[100];
    int totalWords;

    printf("Enter file name:\n");
    scanf("%s", filename);

    countWordsInFile(filename, &totalWords);

    printf("Total number of words in '%s' : %d words\n", filename, totalWords);

    return 0; // จบโปรเเกรม
}