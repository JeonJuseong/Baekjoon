#include <stdio.h>

int main() {
    int mod[10];
    int num, cnt = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &mod[i]);
        mod[i] %= 42;
    }

    for(int i = 0; i < 10; i++) {
        num = mod[i];
        for(int j = i+1; j < 10; j++) {
            if(num == mod[j])
                mod[j] = -1;
        }
    }

    for(int i = 0; i < 10; i++)
        if(mod[i] != -1) cnt++;

    printf("%d\n", cnt);

    return 0;
}
