#include <stdio.h>
#include <string.h>
int alph[26] = { 0,};

int main() {
   char words[1000000];
   int i = 0;
   int temp, big;
   scanf("%s", words);
   
   while(words[i] != '\0') {
      if(words[i] < 91) words[i] += 32;
      temp = words[i++] - 97;
      alph[temp]++;
   }

   temp = alph[0];
   alph[0] = 0;
   big = 0;
   for(int i = 1; i < 26; i++) {
      if(temp < alph[i]) {
         temp = alph[i];
         alph[i] = 0;
         big = i;
      }
   }
   for(int i = 0; i < 26; i++) {
      if(temp == alph[i]){
         printf("?\n");
         return 0;
      }
   }

   printf("%c\n", big + 65);
   return 0;
}
