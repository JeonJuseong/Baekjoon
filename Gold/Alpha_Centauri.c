//Baekjoon No.1011
#include <stdio.h>
#include <math.h>

int get_calc_info(); //x좌표값과 y좌표값을 받아 정보에 따른 거리를 계산해return 한다.
void main_process(); //여러 프로그램들을 적시적소에 배치
int main_calculation(int); //메인이 되는 계산을 하는 함수

int main() {
    main_process();
    return 0;
}

void main_process() {
    int repeat, need_cnt;
    int dist;
    scanf("%d", &repeat);
    
    for(int i = 0; i < repeat; i++) {
        dist = get_calc_info();
        need_cnt = main_calculation(dist);
        printf("%d\n", need_cnt);
    }
}

int get_calc_info() {
    int x, y;
    scanf("%d %d", &x, &y);
    return y-x;
}

int main_calculation(int distance) {
    int cnt = 0
    unsigned sum = 0;

    cnt = sqrt(distance);
    while(distance > sum) {
        sum = cnt * cnt + cnt;
        cnt++;
    }
    --cnt;
    sum -= cnt; //가야하는 거리보다 더 큰 값이 발생했으므로, 마지막 수의 짝에서 하나를 제외한다.

    if(sum == distance) {
        return (cnt * 2 - 1);
    }
    else if(sum < distance) {
        return (cnt * 2);
    }
    else {
        sum -= cnt;
        if(sum == distance) return (cnt * 2 - 2);
        else return (cnt * 2 - 1);
    }
}
