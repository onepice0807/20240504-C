#include <stdio.h> // �������
#include <time.h>
#include <stdlib.h>

// +, -, *, / , %
// % ������ ������(modulate operator)
// 11 / 2 = 5
// 11 % 2 = 1
// ������ �����ڴ� �������� ���Ҷ� ����մϴ�.
// ������ ���� ������ ������ ������ ���鶧 ����մϴ�.


int main() {
	srand(time(NULL));   // ���� �ð����� ���� �ʱⰪ�� ����

	int randValue = rand(); // rand() ���� �߻��Լ�
	int direction = randValue % 4;

	printf("randValue = %d, direction = %d\n", randValue, direction);

	randValue = rand();
	direction = randValue % 4;
	printf("randValue = %d, direction = %d\n", randValue, direction);

	randValue = rand();
	direction = randValue % 4;
	printf("randValue = %d, direction = %d\n", randValue, direction);

	randValue = rand();
	direction = randValue % 4;
	printf("randValue = %d, direction = %d\n", randValue, direction);

	return 0;
}