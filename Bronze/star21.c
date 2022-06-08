#include <stdio.h>

int main() {
   int num;
   int i = 0;
   scanf("%d", &num);
   i = num / 2;

   for(int k = 0; k < num; k++) {
      for(int j = 0; j < num - i; j++)
         printf("* ");
      printf("\n");
      
      if(num == 1) continue;
      else if(num % 2 == 0) {
         for(int j = 0; j < num - i; j++)
            printf(" *");
      }
      else {
         for(int j = 0; j < num - (i + 1); j++)
            printf(" *");
      }
      printf("\n");
   }

   return 0;
}
