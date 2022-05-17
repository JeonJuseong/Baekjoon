//2667 단지번호 붙이기
#include <stdio.h>
#include <algorithm>
using namespace std;

int apt[25][25] = { 0, };
int cnt;
int complexs[625] = { 0, };

void dfs(int, int, int);

int main() {
    int N, k = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            scanf("%1d", &apt[i][j]);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cnt = 0;
            if(apt[i][j] == 1) {
                dfs(i, j, N); 
                complexs[k++] = cnt;
            }
        }
    }
    sort(complexs, complexs+k);

    printf("%d\n", k);
    for(int i = 0; i < k; i++)
        printf("%d\n", complexs[i]);

    return 0;
}

void dfs(int x, int y, int N) {
    cnt++;
    apt[x][y] = 0;

    if(x + 1 < N && apt[x + 1][y] == 1) dfs(x + 1, y, N);
    if(x - 1 >= 0 && apt[x - 1][y] == 1) dfs(x - 1, y, N);
    if(y + 1 < N && apt[x][y + 1] == 1) dfs(x, y + 1, N);
    if(y - 1 >= 0 && apt[x][y - 1] == 1) dfs(x, y - 1, N);
    return;
}
