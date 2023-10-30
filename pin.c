#include <stdio.h>

#define PIN 3845
#define TRIES 3


int main() {
    int pin;
    int countOfChar;
    int tries = TRIES;

    do{
        printf("Write the pin: \n");
        scanf("%d", &pin);

        countOfChar = 0;
        while (getchar() !='\n') {
            countOfChar++;
        }
        tries = tries -1;
        if (countOfChar != 0) {
            printf("Invalid");
        }
        else if (pin == PIN){
            printf("Got it");
        }
        else{
            printf("Wrong entry");
        }
    }while (tries > 0 && pin != PIN);

    return 0;
}
