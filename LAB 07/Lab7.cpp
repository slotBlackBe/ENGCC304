#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int score;
    int command;
    int low, high;

    srand(time(NULL));

    while (1) {
        
        printf("\nDo you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &command) != 1) { 
            
            while (getchar() != '\n'); 
            printf("\nPlease enter only 1 or -1.\n");
            continue;
        }

        if (command == -1) {
            printf("\nSee you again.\n");
            break;
        } else if (command != 1) {
            printf("\nPlease enter only 1 or -1.\n");
            continue;
        }


        score = 100;
        low = 1;
        high = 100;
        secret = rand() % 100 + 1;

        printf("\n(Score=100)\n");

        while (1) {
            printf("\nGuess the winning number (%d-%d) :\n", low, high);
            scanf("%d", &guess);

            if (guess == secret) {
                printf("\nThat is correct! The winning number is %d.\n", secret);
                printf("\nScore this game: %d\n", score);
                break;
            } else {
                score -= 10;
                if (score < 0) score = 0;

                if (guess < secret) {
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    if (guess + 1 > low) low = guess + 1; 
                } else {
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    if (guess - 1 < high) high = guess - 1; 
                }
            }
        }
    }
    return 0;
}
