//
// Created by Qian on 24-9-20.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    int max=100;
    int tries=7;
    int guess=0;
    printf("The computer will generate a number between 1 and %d.""You have %d chances.",max,tries);
    srand(time(NULL));
    int secret = rand() % max + 1 ;

    while (tries > 0) {
        printf("Enter a number\n");
        scanf("%d",&guess);
        if (guess > secret) {
            printf("The number is greater than the secret number.\n");
        }
        else if (guess < secret) {
            printf("The number is less than the secret number.\n");
        }
        else if (guess == secret) {
            printf("You win!.\n");
            break;
        }
        tries = tries-1;
    }
    return 0;
}
