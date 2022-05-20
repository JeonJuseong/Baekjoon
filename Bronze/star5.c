#include <stdio.h>

int main() {
   int count;
   scanf("%d", &count);

   for(int i = 1; i <= count; i++) {
      for(int j = count - 1; j > i - 1; j--)
         printf(" ");
      for(int k = 0; k < 2*i-1; k++)
         printf("*");
      printf("\n");
   }

}
