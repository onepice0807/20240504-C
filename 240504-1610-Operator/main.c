#include <stdio.h>

// ��� ������
// +, -, *, / ,%

int main() {
	int a = 1;
	int b = 2;
	int ret = 0;

	ret = a + b; // ���� + ���� = ����
	printf("%d + %d = %d\n", a, b, ret);

	ret = a - b; // ���� - ���� = ����
	printf("%d - %d = %d\n", a, b, ret);
	ret = a * b; // ���� * ���� = ����
	printf("%d * %d = %d\n", a, b, ret);

	ret = a / b; // ���� % ���� = ����
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / b; // ���� / ���� = ����
	printf("%d / %d = %f\n", a, b, fret);

	fret = a / (float)b; // ���� / �Ǽ� = �Ǽ�
	printf("%d / %d = %f\n", a, b, fret);

	return 0;
}