#include <stdio.h>

int main() {
    int dice[3];
    int score = 0, big;
    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

    if(dice[0] == dice[1] && dice[1] == dice[2])
        score = 10000 + dice[0] * 1000;
    else if(dice[0] == dice[1])
        score = 1000 + dice[0] * 100;
    else if(dice[1] == dice[2])
        score = 1000 + dice[1] * 100;
    else if(dice[0] == dice[2])
        score = 1000 + dice[0] * 100;
    else {
        big = dice[0];
        if(big < dice[1]) big = dice[1];
        if(big < dice[2]) big = dice[2];
        score = big * 100;
    }

    printf("%d\n", score);
}
