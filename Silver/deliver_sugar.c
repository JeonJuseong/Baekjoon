#include <stdio.h>

int main() {
    int weight;
    int cnt = 0;
    scanf("%d", &weight);

    while(weight > 0) {
        if(weight % 5 == 0) {
            cnt += weight / 5;
            weight -= ((weight / 5) * 5);
        }else {
            weight -= 3;
            cnt++;
        }

        if(weight < 3 && weight != 0) { printf("-1\n"); return 0; }
        if(weight == 0) break;
    }

    printf("%d\n", cnt);
    
    return 0;
}
