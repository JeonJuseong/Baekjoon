//2577번 숫자의 개수
#include <stdio.h>

int main() {
    int a, b, c;
    int temp = 0;
    char ten[10] = { 0, };
    scanf("%d %d %d", &a, &b, &c);

    a = a * b * c;
    while(a > 0) {
        temp = a % 10;
        ten[temp]++;
        a /= 10;
    }
    
    for(int i = 0; i < 10; i++)
        printf("%d\n", ten[i]);

    return 0;
}
