#include <stdio.h>

int main() {
	int x1, y1, r1;
	int x2, y2, r2;
	int count, L, Rp, Rm;
	scanf("%d", &count);

	while(count--) {
		scanf("%d %d %d", &x1, &y1, &r1);
		scanf("%d %d %d", &x2, &y2, &r2);
		
		L = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
		Rp = ((r1 + r2) * (r1 + r2));
		Rm = ((r2 - r1) * (r2 - r1));

		if(L == 0 && r1 == r2) printf("-1\n");
		else if(Rp == L || Rm == L) printf("1\n");
		else if(Rp < L || Rm > L) printf("0\n");
		else if(Rp > L || Rm < L)printf("2\n");
	}
	return 0;
}
