#include <stdio.h>

// 콘솔창에 값을 출력할때 printf라는 함수를 사용
// printf함수는 형식지정 문자열 지원
// int a =10, b = 20, c = 30;
// printf("a= %d, b = %d, c = %\n", a, b, c);
// %d 부호있는 정수값
// %u 부호없는 정수값
// %f float형 출력
// %if double형 출력
// %c 문자형을 출력
// %s 문자열을 출력

// DataType(자료형)

// 정수형
// short(2byte) -32768 ~ 32767
// long(4byte) -2147483648 ~ 2147483647
// int (4byte) -2147483648 ~ 2147483647

// unsined short(2byte) 0 ~ 65535
// unsined long(4byte) 0 ~ 4294967295 
// unsined int (4byte) 0 ~ 4294967295 

// 실수형
// float (4byte) 3.4E +/- 38 
// double (8byte) -1.79769e+308 ~ 1.79769e-308

// 문자형
// char (1byte) -128 ~ 127
// unsigned char (1byte) 0 ~ 255


int main() {
	// 정수형
	short a = -32768; // 부호있는 정수형을 출력할때 %d
	long b = -2147483647 - 1;
	int c = 2147483647;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	unsigned short d = 65535; // 부호있는 정수형을 출력할때 %u
	unsigned long e = 4294967295;
	unsigned int f = 0;

	printf("d = %d, e = %d, f = %d\n", d, e, f);

	float g = 3.4E-38;   // float형을 출력할때 %f
	double h = -1.79769e-308;   // double형을 출력할때 %lf

	printf("g = %.40f, h = %.320lf\n", g, h);


	char i = 65;

	unsigned char j = 'B'; // 문자의 값을 입력할때는 따옴표 문자를 감싸면 된다.

	printf("i = %c, j = %c\n", i, j);

	return 0;
}