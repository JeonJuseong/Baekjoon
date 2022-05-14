#include <stdio.h>
#include <stdlib.h>

double calc(double*, int);
int get_nums(double*, int);
int N;

int main() {
   int big;
   double *room, result;
   scanf("%d", &N);

   room = (double*)malloc(sizeof(double) * N);
   
   big = get_nums(room, big);
   result = calc(room, big);
   printf("%lf\n", result * 100);

   free(room);
   return 0;
}

int get_nums(double *room, int big) {
   int tmp;

   scanf("%d", &big);
   room[0] = big;      

   for(int i = 1; i < N; i++) {
      scanf("%d", &tmp);
      if(big < tmp) big = tmp;
      room[i] = tmp;
   }
   return big;
}

double calc(double *room, int big) {
   double temp, sum = 0;

   for(int i = 0; i < N; i++) {
      temp = room[i];
      temp /= big;
      sum += temp;
   }
   sum /= N;

   return sum;
}
