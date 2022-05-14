#include <stdio.h>

int main(int argc, char *argv[]){
   int num = 0;
   int A, B;
   int temp = 0;
   scanf("%d", &num);

   for(int i = 0; i < num; i++) {
      scanf("%d %d", &A, &B);
      temp = A;
      
      for(int j = 0; j < B - 2; j++)
         temp = (temp * A) %10;
      if(temp%10 == 0) printf("10\n");
      else printf("%d\n", temp%10);
   }
   return 0;
}
