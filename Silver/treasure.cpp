#include <stdio.h>
#include <algorithm>
using namespace std;

bool compare(int i, int j) {
    return j < i;
}

int main() {
    int N, result = 0;
    int a[50], b[50];
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < N; i++)
        scanf("%d", &b[i]);

    sort(a, a+N);
    sort(b, b+N, compare);

    for(int i = 0; i < N; i++)
        result += a[i] * b[i];

    printf("%d\n", result);

    return 0;
}
