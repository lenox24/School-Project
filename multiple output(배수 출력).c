#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 100; i++) {
		if (i == 1) {
			printf("%d", i*n);
			i++;
		}
		printf(", %d", i*n);
		if ((i*n) % 10 == 0) {
			break;
		}
	}
	printf("\n");
	system("pause");
}