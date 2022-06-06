#include <stdio.h>
#include <string.h>

int main() {
    int tcase, length;
    int score = 1;
    int accum = 0;
    char ox[81];
    scanf("%d", &tcase);

    for(int i = 0; i < tcase; i++) {
        scanf("%s", ox);
        length = strlen(ox);
        for(int j = 0; j< length; j++) {
            if(ox[j] != 'X') accum += score++;
            else score = 1;
        }
        printf("%d\n", accum);
        accum = 0;
        score = 1;
    }

    return 0;
}
