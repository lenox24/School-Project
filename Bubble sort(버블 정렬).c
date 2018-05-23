#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")

int main() {
	int num[5] = { 90,70,80,100,50 }, temp, i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (num[j] > num[j+1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) printf("%d ", num[i]);
	pause;
}