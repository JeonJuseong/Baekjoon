#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int num;
    int nms[1000] = { 0, };
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
        scanf("%d", &nms[i]);
    
    sort(nms, nms + num);

    for(int i = 0; i < num; i++)
        printf("%d\n", nms[i]);

    return 0;
}
