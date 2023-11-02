// THIS CODE PRINTS OUT ASCII SYMBOLS FROM 32 TO 127, FIRST USE OF FOR LOOP IN C


#include <stdio.h>

#define SIZE 128
#define COLUMN 5
#define START 0



int main() {

   int symbol;
   int count = 0;

   for(symbol=32; symbol<SIZE; symbol++){
      printf("%4d %c", symbol, symbol);
      count++;
      if (count % COLUMN == 0) {
      printf("\n");
      }
   }
   return 0;
}
