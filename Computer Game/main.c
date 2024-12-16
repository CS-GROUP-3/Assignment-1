#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rounds, score = 0, secret_num, lucky_num;
    srand(time(NULL));
    secret_num = rand() % 10 + 1;
    // Prompt user to input rounds they'll play
    printf("Enter the number of rounds you want to play: ");
    scanf("%d", &rounds);
    
    while(rounds > 0){
        printf("Enter your lucky number: ");
        scanf("%d", &lucky_num);
        if (lucky_num % secret_num == 0){
            printf("Draw\n");
            score = score + 1;
        } else if (lucky_num % 2 == 0){
            printf("You win\n");
            score = score + 3;
        } else {
            printf("You lose\n");
            score = score - 3;
        }
        rounds--;
    }
    if (score > 0){
        printf("YOU WIN\n");
    } else {
        printf("YOU LOSE\n");
    }
    printf("Your score is %d", score);
    return 0;
}
