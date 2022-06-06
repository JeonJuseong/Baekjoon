#include <stdio.h>
#include <string.h>

int stack[10000];
int pointer = -1;

void push(int);
void pop();
void size();
void empty();
void top();
void sorting();

int main(int argc, char *argv[]) {
   int cnt;
   scanf("%d", &cnt);

   while(cnt--)
      sorting();

   return 0;
}

void sorting() {
   char order[6];
   int temp;
   
   scanf(" %s", order);
   if(strcmp(order, "push") == 0) {
      scanf("%d", &temp);
      push(temp);
   }
   if(strcmp(order, "pop") == 0)
      pop();
   if(strcmp(order, "size") == 0)
      size();
   if(strcmp(order, "empty") == 0)
      empty();
   if(strcmp(order, "top") == 0)
      top();
}

void push(int num) {
  stack[pointer++] = num;
}

void pop() {
   if(pointer == -1) printf("-1\n");
   else printf("%d\n", stack[--pointer]);
}

void size() {
   printf("%d\n", pointer + 1);
}

void empty() {
   if(pointer == -1) printf("1\n");
   else printf("0\n");
}

void top() {
   if(pointer == -1) printf("-1\n");
   else printf("%d\n", stack[pointer - 1]);
}
