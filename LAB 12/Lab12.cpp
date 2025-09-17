#include <stdio.h>
#include <string.h>

struct Student {
    char Name[50]; // เก็บชื่อข้อมูล
    char ID[15]; // เก็บรหัสข้อมูล
    float ScoreSub1; //คะเเนนวิชาที่ 1
    float ScoreSub2; //คะเเนนวิชาที่ 2
    float ScoreSub3; //คะเเนนวิชาที่ 3
    float ScoreSub4; //คะเเนนวิชาที่ 4
    float ScoreSub5; //คะเเนนวิชาที่ 5
} typedef S; // เรียก struct ว่า S

// ฟังก์ชันตัดเกรด
char *getGrade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

// ฟังก์ชันแสดงข้อมูลนักเรียน
void showStudent(S st) {
    float scores[5] = {
        st.ScoreSub1, // เเสดงข้อมููลวิชาที่ 1
        st.ScoreSub2, // เเสดงข้อมููลวิชาที่ 2
        st.ScoreSub3, // เเสดงข้อมููลวิชาที่ 3
        st.ScoreSub4, // เเสดงข้อมููลวิชาที่ 4
        st.ScoreSub5 // เเสดงข้อมููลวิชาที่ 5
    };
    float sum = 0;
    // ใส่ข้อมูลชื่อนักเรียนและเกรด
    printf("Name: %s\n", st.Name);
    printf("ID: %s\n", st.ID);

    printf("Scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%.0f ", scores[i]); // เเสดงทศนิยม 0 ตำเเหน่ง
        sum += scores[i]; // สะสมคะเเนน
    }
    //เเสดงคะเเนนเฉลี่ยน
    printf("\nGrades: ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", getGrade(scores[i]));  // เรียกฟังก์ชั่น getGrade()
    }
    // คำนวณค่าเฉลี่ย เเละเเสดงผล
    printf("\nAverage Score: %.1f\n\n", sum / 5);
}

int main() {
    int n = 3; // จำนวนที่ต้องการเก็บ = 3 คน
    S students[n]; // ประกาศตัว array struct เก็บข้อมูลนักเรียน 3 คน

    printf("=== Enter the details of %d students ===\n", n); // รับข้อค่ามูลนักเรียน

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        // กรอกชื่อนักเรียน
        printf("Name: ");
        getchar(); // ล้างข้อมูลที่อยู่ใน buffer พร้อมรับข้อมูลใหม่
        fgets(students[i].Name, sizeof(students[i].Name), stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = 0; // ลบ \n ออก
        // กรอกรหัสนักเรียน
        printf("ID: ");
        scanf("%s", students[i].ID);
        printf("Score Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);
        printf("Score Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);
        printf("Score Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);
        printf("Score Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);
        printf("Score Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    printf("\n=== Student Results ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        showStudent(students[i]);
    }

    return 0; // จบโปรเเกรม
}
