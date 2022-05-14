#include <stdio.h>

int main() {
   int scores;
   int sum = 0;

   for(int i = 0; i < 5; i++) {
      scanf("%d", &scores);
      if(scores < 40) scores = 40;
      sum += scores;
   }

   sum /= 5;
   printf("%d\n", sum);
   
}
