#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, sum = 0, cnt = 0;
	scanf("%d", &n);
	for (int i = 1; ; i += 2) {
		sum += i;
		cnt++;
		if (sum >= n) {
			break;
		}
	}
	printf("%d %d", cnt, sum);
	system("pause");
}