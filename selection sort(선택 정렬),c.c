#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")

int main() {
	int num[5] = { 90,70,80,100,50 }, min, temp, i, j;
	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (num[j] < num[min]) {
				min = j;
			}
		}
		temp = num[i];
		num[i] = num[min];
		num[min] = temp;
	}
	for (int i = 0; i < 5; i++) printf("%d ", num[i]);
	pause;
}