#include <stdio.h> // 헤더파일
#include <time.h>
#include <stdlib.h>

// +, -, *, / , %
// % 나머지 연산자(modulate operator)
// 11 / 2 = 5
// 11 % 2 = 1
// 나머지 연산자는 나머지를 구할때 사용합니다.
// 임의의 값을 일정한 범위의 값으로 만들때 사용합니다.


int main() {
	srand(time(NULL));   // 현재 시간으로 난수 초기값을 만듦

	int randValue = rand(); // rand() 난수 발생함수
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