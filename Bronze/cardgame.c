#include <stdio.h>

int main() {
	int result = 0, tmp;
	int i = 5;
	while(i--) {
		scanf("%d", &tmp);
		result += tmp;
	}
	printf("%d\n", result);
	return 0;
}
