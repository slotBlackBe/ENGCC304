#include <stdio.h>
#include <ctype.h>  // ใช้สำหรับ isspace()

// ฟังก์ชันนับจำนวนคำในไฟล์
int countWordsInFile(char filename[]) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file '%s'\n", filename);
        return -1; // คืนค่า -1 กรณีเปิดไฟล์ไม่สำเร็จ
    }

    int inWord = 0;  // ตัวแปรบอกว่าอยู่ในคำหรือไม่
    int wordCount = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            if (inWord) {
                wordCount++;  // เจอจุดจบคำ
                inWord = 0;
            }
        } else {
            inWord = 1;  // อยู่ในคำ
        }
    }

    // หากไฟล์ไม่จบด้วย space ให้บวกคำสุดท้าย
    if (inWord) {
        wordCount++;
    }

    fclose(fp);
    return wordCount;
}

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    int count = countWordsInFile(filename);
    if (count != -1) {
        printf("Total number of words in '%s' : %d words\n", filename, count);
    }

    return 0;
}
