#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int pass = 1;
    printf("Enter word:\n");
    scanf("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - 1 - i])){
            pass = 0; 
            break;
        }
    }

    if (pass) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
    return 0; // จบโปรเเกรม
}