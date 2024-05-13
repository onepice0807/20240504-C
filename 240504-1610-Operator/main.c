#include <stdio.h>

// 산술 연산자
// +, -, *, / ,%

int main() {
	int a = 1;
	int b = 2;
	int ret = 0;

	ret = a + b; // 정수 + 정수 = 정수
	printf("%d + %d = %d\n", a, b, ret);

	ret = a - b; // 정수 - 정수 = 정수
	printf("%d - %d = %d\n", a, b, ret);
	ret = a * b; // 정수 * 정수 = 정수
	printf("%d * %d = %d\n", a, b, ret);

	ret = a / b; // 정수 % 정수 = 정수
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / b; // 정수 / 정수 = 정수
	printf("%d / %d = %f\n", a, b, fret);

	fret = a / (float)b; // 정수 / 실수 = 실수
	printf("%d / %d = %f\n", a, b, fret);

	return 0;
}