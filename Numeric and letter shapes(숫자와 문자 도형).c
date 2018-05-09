#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int ncnt = 1, ccnt = 0, n;
	int i, j, l;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%c\t", ccnt + 97);
			ccnt++;
		}
		for (l = n - j; l >= 0; l--) {
			printf("%d\t", ncnt);
			ncnt++;
		}
		printf("\n");
	}
	system("pause");
}