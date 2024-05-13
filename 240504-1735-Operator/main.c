#include <stdio.h>

int main() {
	int TRUE = 2000;
	int FALSE = 0;

	// && (논리 And)
	// 논리 And연산자는 FALSE 확률이 높은 것을 처음에 놓는 것이 
	// 유리합니다.
	printf("논리 And(&&)\n");
	int ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);

	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	// || (논리 OR)
	// 논리 OR 연산자는 TRUE 확률이 높은 것을 앞쪽에 놓는것이 유리
	// 합니다.
	printf("\n\n논리 OR(||)\n");
	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	// !(논리 not)

	printf("\n\n논리 Not\n");
	ret = !TRUE;
	printf("!TRUE = %d\n", ret);

	ret = !FALSE;
	printf("!FALSE = %d\n", ret);


	return 0;
}