#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터 - 1
	char ch;
	int tmp;
	double db;

	*&ch = 'P'; //*&는 상쇄 가능
	*&tmp = 100;
	*&db = 3.14;
	printf("ch에 저장된 문자 : %c\n", ch);
	printf("tmp에 저장된 숫자 : %d\n", tmp);
	printf("db에 저장된 숫자 : %lf\n", db);

	tmp = 300;
	printf("tmp에 저장된 숫자 : %d\n", tmp);
	
	//포인터 - 2
	int a = 100, b = 0;
	b = *&a;
	printf("b에 저장된 값 : %d\n",b);
	//포인터 &a가 가리키는 주소의 값을 b에 대입

	//포인터 - 3
	int c = 10, d = 20;
	*&c = *&d;
	printf("c에 저장된 값 : %d\n", d);
	//c = 20 즉, c = d;
	
	system("pause");
}