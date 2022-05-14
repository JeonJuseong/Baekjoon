#include <stdio.h>
int trees[1000001];
int search_length(int end, int num, int need) {
	int start = 1, avg = 0;
	double result = 0;

	while(start <= end) {
		result = 0;
		avg = (start + end) / 2;

		for(int i = 0; i < num; i++)
			if(avg < trees[i]) result += (trees[i] - avg);

		if (result >= need) start = avg + 1;
		else end = avg - 1;
	}
	return end;
}

int main() {
	int num, need;
	int longest = 0;
	int result;
	scanf("%d %d", &num, &need);

	for(int i = 0; i < num; i++) {
		scanf("%d", &trees[i]);
		if(longest < trees[i]) longest = trees[i];
	}

	result = search_length(longest, num, need);
	printf("%d\n", result);

	return 0;
}
