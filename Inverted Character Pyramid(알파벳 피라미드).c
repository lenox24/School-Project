#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, cnt = 0;
	while (1) {
		scanf("%d", &n);
		if (n > 7) {
			printf("Input limit exceeded!\n");
		}
		else {
			break;
		}
	}
	for (int i = n; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("%c ", 65 + cnt);
			cnt++;
		}
		printf("\n");
	}
	system("pause");
}