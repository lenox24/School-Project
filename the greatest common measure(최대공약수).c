#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int v1, v2, v3, sol;

input() {
	printf("Please enter 3 numbers\n");
	printf("Enter : ");
	scanf("%d %d %d", &v1, &v2, &v3);
}

process() {
	for (int j = 1; j <= v1; j++) {
		if (v1 % j == 0 && v2 % j == 0 && v3 % j == 0) {
			sol = j;
		}
	}
}

output() {
	printf("the greatest common measure : %d\n", sol);
}

int main() {
	input();
	process();
	output();
	system("pause");
}


