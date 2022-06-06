#include <stdio.h>

int main() {
   int yut[4] = { 0, };
   int num = 3, zero;
   while(num--) {
      scanf("%d %d %d %d", &yut[0], &yut[1], &yut[2], &yut[3]);
      zero = 0;
      for(int i = 0; i < 4; i++) {
         if(yut[i] == 0) zero++;
      }
      if(zero == 0) printf("E\n");
      else if(zero == 1) printf("A\n");
      else if(zero == 2) printf("B\n");
      else if(zero == 3) printf("C\n");
      else printf("D\n");
   }


   return 0;
}
