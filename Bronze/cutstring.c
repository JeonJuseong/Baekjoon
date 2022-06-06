#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
   char str[101];
   int len = 0;
   scanf("%s", str);
   len = strlen(str);

   for(int i = 0; i < len; i++) {
      printf("%c", str[i]);
      if((i + 1) % 10 == 0) printf("\n");
   }
         
   return 0;
}
