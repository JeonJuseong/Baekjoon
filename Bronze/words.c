//1152번 - 단어의 개수
#include <stdio.h>
#include <string.h>

int main() {
    int f_b = 0;
    int space = 0;
    int len;
    char str[1000001];

    scanf("%[^\n]s", &str);
    len = strlen(str);
    if(str[0] == ' ') f_b++;
    if(str[len - 1] == ' ') f_b++;

    for(int i = 0; i < len; i++)
        if(str[i] == ' ') space++;

    space -= f_b;
    space++;
    printf("%d\n", space);

    return 0;
}
