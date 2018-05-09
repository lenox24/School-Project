#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d ", 1 + cnt);
			cnt++;
		}
		printf("\n");
	}
	system("pause");
}