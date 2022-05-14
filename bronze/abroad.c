#include <stdio.h>
#include <string.h>

int main() {
   int len = 0;
   char buff[101];
   char censorship[10] = "ABCDEGIMR";
   scanf(" %s", buff);
   
   len = strlen(buff);

   for(int i = 0; i < len; i++) {
      for(int k = 0; k < 9; k++) {
         if(buff[i] == censorship[k]) {
            buff[i] = '0';
            break;
         }
      }
   }

   for(int i = 0; i < len; i++) {
      if(buff[i] == '0') continue;
      else printf("%c", buff[i]);
   }
   printf("\n");
   return 0;
}
