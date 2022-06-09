#include <stdio.h>

int main(int argc, char *argv[]) {
   int star;
   scanf("%d", &star);

   for(int i = 0; i < star; i++) {
      for(int j = star - i; j > 0; j--)
         printf("*");
      printf("\n");
   }

   return 0;
}
