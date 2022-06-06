#include <stdio.h>

char word[100];
int check();

int main() {
    int loop, cnt = 0;
    int re_check;
    scanf("%d", &loop);

    while(loop--) {
        scanf(" %s", word);
        re_check = check();
        if(re_check == 1) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}

int check() {
    int i = 1, temp = 0;
    int alphabet[26] = { 0, };

    alphabet[word[0] - 'a']++;
    while(word[i] != '\0') {
        temp = word[i] - 'a';
        if(alphabet[temp] != 0 && word[i-1] != word[i])
            return 0;
        else alphabet[temp]++;
        i++;
    }
    return 1;
}
