#include <stdio.h>
#include <string.h>

int main() {
   int num = 0;
   int r, len;
   char str[21];
   scanf("%d", &num);

   while(num--) {
      scanf("%d", &r);
      scanf("%s", str);
      len = strlen(str);
      for(int i = 0; i < len; i++) {
         for(int k = 0; k < r; k++)
            printf("%c", str[i]);
      }
      printf("\n");
   }

   return 0;
}
