#include <stdio.h>

int main() {
	int people, area;
	scanf("%d %d", &people, &area);
	people *= area;

	for(int i = 0; i < 5; i++) {
		scanf("%d", &area);
		printf("%d ", area - people);
	}
	printf("\n");
	return 0;
}
