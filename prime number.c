#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		printf("prime number.\n");
	}
	else {
		printf("Not a prime number.\n");
	}
	system("pause");
}