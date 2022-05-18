#include <stdio.h>

int main() {
    int x, y, w, h;
    int one, two, small;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    one = w - x;
    two = h - y;
    
    small = x;

    if(y < small) small = y;
    if(one < small) small = one;
    if(two < small) small = two;

    printf("%d\n", small);

    return 0;
}
