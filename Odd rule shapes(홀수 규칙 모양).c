#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int cnt = 1, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", cnt % 10);
			cnt += 2;
		}
		printf("\n");
	}
	system("pause");
}