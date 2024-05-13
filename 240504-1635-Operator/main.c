#include <stdio.h>

// �ܼ�â�� ���� ����Ҷ� printf��� �Լ��� ���
// printf�Լ��� �������� ���ڿ� ����
// int a =10, b = 20, c = 30;
// printf("a= %d, b = %d, c = %\n", a, b, c);
// %d ��ȣ�ִ� ������
// %u ��ȣ���� ������
// %f float�� ���
// %if double�� ���
// %c �������� ���
// %s ���ڿ��� ���

// DataType(�ڷ���)

// ������
// short(2byte) -32768 ~ 32767
// long(4byte) -2147483648 ~ 2147483647
// int (4byte) -2147483648 ~ 2147483647

// unsined short(2byte) 0 ~ 65535
// unsined long(4byte) 0 ~ 4294967295 
// unsined int (4byte) 0 ~ 4294967295 

// �Ǽ���
// float (4byte) 3.4E +/- 38 
// double (8byte) -1.79769e+308 ~ 1.79769e-308

// ������
// char (1byte) -128 ~ 127
// unsigned char (1byte) 0 ~ 255


int main() {
	// ������
	short a = -32768; // ��ȣ�ִ� �������� ����Ҷ� %d
	long b = -2147483647 - 1;
	int c = 2147483647;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	unsigned short d = 65535; // ��ȣ�ִ� �������� ����Ҷ� %u
	unsigned long e = 4294967295;
	unsigned int f = 0;

	printf("d = %d, e = %d, f = %d\n", d, e, f);

	float g = 3.4E-38;   // float���� ����Ҷ� %f
	double h = -1.79769e-308;   // double���� ����Ҷ� %lf

	printf("g = %.40f, h = %.320lf\n", g, h);


	char i = 65;

	unsigned char j = 'B'; // ������ ���� �Է��Ҷ��� ����ǥ ���ڸ� ���θ� �ȴ�.

	printf("i = %c, j = %c\n", i, j);

	return 0;
}