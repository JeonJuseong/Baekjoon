#include <stdio.h>

int main(int argc, char *argv[]) {
   int burger[3];
   int beverage[2];
   int sum, small;

   for(int i = 0; i < 3; i++)
      scanf("%d", &burger[i]);

   for(int i = 0; i < 2; i++)
      scanf("%d", &beverage[i]);

   small = burger[0];
   for(int i = 1; i <= 2; i++)
      if(burger[i] < small) small = burger[i];
   sum = small;

   if(beverage[0] < beverage[1]) small = beverage[0];
   else small = beverage[1];

   sum += small;
   printf("%d\n", sum - 50);

   return 0;
}
