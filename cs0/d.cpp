#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){

    srand((unsigned)time(NULL));

    
    int random0 = rand()%(MAX + 1);
    printf("Write the number: ");
    
    
    return 0;
}