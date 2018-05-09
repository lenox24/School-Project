#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	for (int i = 2; i <= 8; i += 2) {
		for (int j = 1; j <= i; j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
}