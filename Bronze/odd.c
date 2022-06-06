#include <stdio.h>

int main() {
   int odd[7] = { 0,};
   int num = 7, cnt = 0;
   int tmp;

   while(num--) {
      scanf("%d", &tmp);
      if(tmp % 2 != 0) {
         odd[cnt++] = tmp;
      }
   }
   if(cnt == 0) printf("-1\n");
   else if(cnt == 1) printf("%d\n%d\n",odd[0], odd[0]);

   else {
      tmp = num = odd[0];
      for(int i = 1; i < cnt; i++) {
         num += odd[i];
         if(odd[i] < tmp) tmp = odd[i];         
      }
      printf("%d\n%d\n", num, tmp);
   }

   return 0;
}
