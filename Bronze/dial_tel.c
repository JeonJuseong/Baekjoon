#include <stdio.h>
#include <string.h>

int search(char);

int main() {
    int len;
    int nums = 0;
    char str[16];

    scanf("%s", str);
    len = strlen(str);

    for(int i = 0; i < len; i++)
        nums += search(str[i]);
    nums += len;

    printf("%d\n", nums);
    return 0;
}

int search(char tx) {
    switch(tx) {
        case 'A': case 'B': case 'C':
            return 2;
        case 'D': case 'E': case 'F':
            return 3;
        case 'G': case 'H': case 'I':
            return 4;
        case 'J': case 'K': case 'L':
            return 5;
        case 'M': case 'N': case 'O':
            return 6;
        case 'P': case 'Q': case 'R': case 'S':
            return 7;
        case 'T': case 'U': case 'V':
            return 8;
        case 'W': case 'X': case 'Y': case 'Z':
            return 9;
    }
}
