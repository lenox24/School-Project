#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int n, k, cnt, stat = 0;

input() {
	stat = 0;
	Sleep(500);
	system("cls");
	printf("Two numbers separated by spaces\n");
	printf("Enter Length and Unit : ");
	scanf("%d %d", &n, &k);
	process();
}

process() {
	if (n < k) {
		printf("Error! Total length less than unit!\n");
		stat = 1;
		input();
	}
	
	cnt = n / k;
	if (cnt > 9999) {
		printf("Number Exceeded Error\n");
		stat = 1;
		input();
	}
	if (n >= k && cnt <= 9999) {
		stat = 2;
	}
}

output() {
	for (int i = 1; i <= cnt; i++) {
		printf("F-%04d\n", i);
	}
}

int main() {
	while (stat == 0) {
		input();
	}
	output();
	system("pause");
}


