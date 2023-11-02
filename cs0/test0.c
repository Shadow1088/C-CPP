#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){

    srand((unsigned)time(NULL));
    int random0 = rand()%(MAX + 1);
    int guess;
    int countOfChar;

    printf("Write the number: ");
    do{
        scanf("%d", &guess);
        
        countOfChar = 0;
        while (getchar() != '\n'){
        countOfChar++;
        }   
        

        if(countOfChar > 1 || guess > MAX){
            printf("Wrong input!\n");
        }else if(guess < random0){
            printf("Too low\n");
        }else if (guess > random0){
            printf("Too high!\n");
        }else{
            printf("You got it!\n");
        }
        
    }while (guess != random0);
    return 0;

}

