#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int resA[10], resZ[10], cnt = 0;
	for (int A = 0; A < 9; A++) {
		for (int Z = 0; Z < 9; Z++) {
			if ((A * 10 + Z) + (Z * 10 + A) == 99) {
				resA[cnt] = A;
				resZ[cnt] = Z;
				cnt++;
			}
		}
	}
	printf("A value : ");
	for (int i = 0; i < cnt; i++) {
		printf("%d ", resA[i]);
	}
	printf("\nZ value : ");
	for (int i = 0; i < cnt; i++) {
		printf("%d ", resZ[i]);
	}
	system("pause");
}