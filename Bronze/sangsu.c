#include <stdio.h>
#define SWAP(a, b, type) {type tmp; tmp = a; a = b; b = tmp;}

int main() {
    int A, B;
    int fst[3], scd[3];

    scanf("%1d %1d %1d", &fst[0], &fst[1], &fst[2]);
    scanf("%1d %1d %1d", &scd[0], &scd[1], &scd[2]);

    SWAP(fst[0], fst[2], int);
    SWAP(scd[0], scd[2], int);

    A = (fst[0]*100) + (fst[1]*10) + fst[2];
    B = (scd[0]*100) + (scd[1]*10) + scd[2];

    if(A > B) printf("%d\n", A);
    else printf("%d\n", B);

    return 0;
}
