#include <stdio.h>

int main() {
	// ��ȣ������
	int a = 20;

	printf("a = %d\n", a);
	a = -a;
	printf("a = %d\n", a);

	// ���迬����: �� ������ ���� ���Ҷ� ����մϴ�.
	// <, >, <=, >=, ==, !=

	int b = 20;
	int c = 30;
	int ret = 0;

	ret = b < c; // ������ ������� ����Ÿ Ÿ����? ����(true, false)
	// c���� ��Ÿ���� �����ϴ�.
	// ����Ÿ���� ������ ��Ÿ���� ó���մϴ�.
	// 0�� ����, 0�̿��� ���� ������ ó���մϴ�.

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