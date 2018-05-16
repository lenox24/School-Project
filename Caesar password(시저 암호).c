#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str1[100], str2[100];

void input() {
	fgets(str1, 100, stdin);
}

void process() {
	for (int i = 0; i < 100; i++) {
		if (str1[i] == ' ') {
			str2[i] == ' ';
		}
		str2[i] == str1[i] - 3;
	}
}

void ouput() {
	printf("%s\n", str2);
}

int main() {
	input();
	process();
	output();
	system("pause");
}