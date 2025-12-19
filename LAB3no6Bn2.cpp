#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score < 0) {
        printf("error score\n");
    }
    else if (score > 100) {
        printf("error score\n");
    }
    else if (score < 68) {           
        if (score >= 55) {
            printf("D\n");
        }
        else {
            printf("F\n");
        }
    }
    else {                           
        if (score >= 85) {
            printf("A\n");
        }
        else if (score >= 75) {
            printf("B\n");
        }
        else {
            printf("C\n");
            printf("%d\n", 75 - score);  
        }
    }

    return 0;
}

