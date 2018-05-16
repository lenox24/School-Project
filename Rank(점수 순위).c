#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num, score[2000];

void input() {
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);
	}
}

int f(int j) {
	int rank = 1;
	for (int i = 0; i < num; i++) {
		if (score[i] > score[j]) {
			rank++;
		}
	}
	return rank;
}

void output() {
	system("cls");
	for (int i = 0; i < num; i++) {
		printf("%d\n",f(i));
	}
}

int main() {
	input();
	output();
	system("pause");
}