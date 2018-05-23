#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")

int width, height;
char print[101][101];

void input() {
	scanf("%d %d", &width, &height);
}

void process() {
	height += 2;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1) {
				if (j == 0) print[i][j] = '+';
				else if (j == width - 1) print[i][j] = '+';
				else print[i][j] = '-';
			}
			else {
				if (j == 0 || j == width - 1) print[i][j] = '|';
				else print[i][j] = ' ';
			}
		}
	}
}

void output() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf("%c", print[i][j]);
		}
		printf("\n");
	}
}

int main() {
	input();
	process();
	output();
	pause;
}