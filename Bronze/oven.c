#include <stdio.h>

int main() {
    int hrs, min, need;
    scanf("%d %d %d", &hrs, &min, &need);
    
    min += need;
    if(min > 59) {
        hrs += (min / 60);
        min -= ((min / 60) * 60);
    }
    
    if(hrs > 23) hrs = hrs - 24;

    
    printf("%d %d", hrs, min);
}
