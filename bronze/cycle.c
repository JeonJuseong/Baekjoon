#include <stdio.h>

int main(int argc, char *argv[]) {
  int result = 0;
  int a, b, c, num;
  int count = 0;

  scanf("%d", &result);
  
  num = result;
  while(1) {
    a = num / 10;
    b = num % 10;
    c = (a + b) % 10;
    num = c + b * 10;

    count++;
    if(num == result) break;
  }

  printf("%d\n", count); //this

  return 0;
}
