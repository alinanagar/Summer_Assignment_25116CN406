#include <stdio.h>

int main(){
    int ans, score = 0;

    printf("Quiz Application\n");

    printf("\nQ1. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ2. Which language is used to write C programs?\n");
    printf("1. C\n2. Java\n3. HTML\n4. Python\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!");
    else if(score == 2)
        printf("Good!");
    else
        printf("Keep Practicing!");

    return 0;
}