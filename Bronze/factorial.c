#include <stdio.h>

int factorial(int num) {
    if(num > 1)
        return num * factorial(num-1);
    else return 1;
}

int main() {
   int sum;
   scanf("%d", &sum);

   printf("%d\n", factorial(sum));

   return 0;
}
