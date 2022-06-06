#include <stdio.h>
#include <string.h>

int color_check(char*);

int main() {
    char first[7], second[7], third[7];
    int one, two;
    double three = 1, tmp;

    scanf("%s %s %s", first, second, third);

    one = color_check(first);
    two = color_check(second);
    tmp = color_check(third);
    
    for(int i = 0; i < tmp; i++)
        three *= 10;
    tmp = ((one * 10) + two) * three;

    printf("%.f\n", tmp);

    return 0;
}

int color_check(char *color) {
    if(strcmp(color, "black") == 0) return 0;
    if(strcmp(color, "brown") == 0) return 1;
    if(strcmp(color, "red") == 0) return 2;
    if(strcmp(color, "orange") == 0) return 3;
    if(strcmp(color, "yellow") == 0) return 4;
    if(strcmp(color, "green") == 0) return 5;
    if(strcmp(color, "blue") == 0) return 6;
    if(strcmp(color, "violet") == 0) return 7;
    if(strcmp(color, "grey") == 0) return 8;
    if(strcmp(color, "white") == 0) return 9;
}
