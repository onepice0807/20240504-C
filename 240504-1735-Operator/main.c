#include <stdio.h>

int main() {
	int TRUE = 2000;
	int FALSE = 0;

	// && (�� And)
	// �� And�����ڴ� FALSE Ȯ���� ���� ���� ó���� ���� ���� 
	// �����մϴ�.
	printf("�� And(&&)\n");
	int ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);

	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	// || (�� OR)
	// �� OR �����ڴ� TRUE Ȯ���� ���� ���� ���ʿ� ���°��� ����
	// �մϴ�.
	printf("\n\n�� OR(||)\n");
	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	// !(�� not)

	printf("\n\n�� Not\n");
	ret = !TRUE;
	printf("!TRUE = %d\n", ret);

	ret = !FALSE;
	printf("!FALSE = %d\n", ret);


	return 0;
}