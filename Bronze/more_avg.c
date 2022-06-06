#include <stdio.h>
#include <stdlib.h>

int main() {
    int cnt, num;
    int more = 0;
    double sum = 0, result = 0;
    int *score;

    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++) {
        scanf("%d", &num);
        score = (int*)malloc(sizeof(int) * num);
        for(int j = 0; j < num; j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        sum = sum / num;

        for(int j = 0; j < num; j++)
            if(score[j] > sum) more++;

        result = (double)more / (double)num * 100;
        printf("%.3lf%\n", result);

        more = sum = 0;
        free(score);
    }
        
}
