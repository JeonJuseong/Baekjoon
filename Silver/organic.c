//유기농배추
#include <stdio.h>

int matrix[50][50] = { 0, };

void dfs(int, int, int, int);
void get_data(int*, int*);

int main() {
   int T, M, N;
   int count;
   scanf("%d", &T);

   while(T--) {
      count = 0;
      get_data(&M, &N);
      for(int i = 0; i < M; i++) {
         for(int j = 0; j < N; j++) {
            if(matrix[i][j] == 1) {
               dfs(i, j, M, N);
               count++;
            }
         }
      }
      printf("%d\n", count);
   }
   return 0;
}

void dfs(int x, int y, int M, int N) {
   matrix[x][y] = 0;

   if(x + 1 < M && matrix[x + 1][y] == 1) dfs(x + 1, y, M , N);
   if(x - 1 >= 0 && matrix[x - 1][y] == 1) dfs(x - 1, y, M, N);
   if(y + 1 < N && matrix[x][y + 1] == 1) dfs(x, y + 1, M, N);
   if(y - 1 >= 0 && matrix[x][y - 1] == 1) dfs(x, y - 1, M , N);
   return;
}

void get_data(int *M, int *N) {
   int K, x, y;
   
   scanf("%d %d %d", M, N, &K);
   for(int j = 0; j < K; j++) {
      scanf("%d %d", &x, &y);
      matrix[x][y] = 1;
   }
}
