#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")

int iron[5][5], max;

void input() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &iron[i][j]);
		}
	}
}

int f(int a, int b) {
	int sum = 0;
	for (int i = a; i < a + 3; i++) {
		for (int j = b; j < b + 3; j++) {
			sum += iron[i][j];
		}
	}
	return sum;
}

void process() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (max < f(i, j)) max = f(i, j);
		}
	}
}

void output() {
	printf("%d", max);
}

int main() {
	input();
	process();
	output();
	pause;
}