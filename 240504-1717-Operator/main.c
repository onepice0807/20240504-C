#include <stdio.h>

int main() {
	// 부호연산자
	int a = 20;

	printf("a = %d\n", a);
	a = -a;
	printf("a = %d\n", a);

	// 관계연산자: 두 변수의 값을 비교할때 사용합니다.
	// <, >, <=, >=, ==, !=

	int b = 20;
	int c = 30;
	int ret = 0;

	ret = b < c; // 연산의 결과값의 데이타 타입은? 논리값(true, false)
	// c언어에는 논리타입이 없습니다.
	// 정수타입을 가지고 논리타입을 처리합니다.
	// 0은 거짓, 0이외의 값은 참으로 처리합니다.

	printf("%d < %d = %d\n", b, c, ret);

	ret = b > c;
	printf("%d > %d = %d\n", b, c, ret);

	ret = b <= c;
	printf("%d <= %d = %d\n", b, c, ret);

	ret = b >= c;
	printf("%d >= %d = %d\n", b, c, ret);

	ret = b == c;
	printf("%d == %d = %d\n", b, c, ret);

	ret = b != c;
	printf("%d != %d = %d\n", b, c, ret);

	return 0;
}