#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	for (int i = 1; i <= 10; i++) {
		printf("divisor of %d: ", i);
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	system("pause");
}