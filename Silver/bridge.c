//1010번 다리놓기
#include <stdio.h>
#define SWAP(a, b, type) {type temp; temp = a; a = b; b = temp;}

double factorial(double);
double calc();

int main() {
    int cnt;
    scanf("%d", &cnt);
    
    while(cnt--) printf("%.lf\n", calc());

    return 0;
}

double factorial(double num) {
    if(num > 1) return num * factorial(num - 1);
    else return 1;
}

double calc() {
    int west, east;
    scanf("%d %d", &west, &east);

    if(west == 0 || east == 0) return 1;
    if(west == 1 || east == 1) {
        if(west == 1) return east;
        if(east == 1) return west;
    }

    if(east > west) SWAP(east, west, int); //nCr에서 n에 큰 수를 배치하기 위함
    
    return factorial(west) / (factorial(west - east) * factorial(east));
}
