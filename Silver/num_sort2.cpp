#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
   int n = 0;
   int *arr;
   scanf("%d", &n);

   arr = (int*)malloc(sizeof(int) * n);
   for(int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   
   sort(arr, arr+n);

   for(int i = 0; i < n; i++)
      printf("%d\n", arr[i]);

   free(arr);
}
