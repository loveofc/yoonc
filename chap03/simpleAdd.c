#include <stdio.h>

int main(void) {

	int reuslt = 0;
	int num1=0, num2 = 0;

	printf("정수 one 입력 : ");
	scanf_s("%d", &num1, sizeof(num1));

	printf("정수 two 입력 : ");
	scanf_s("%d", &num2, sizeof(num2));

	printf("result : %d", num1 + num2);

	return 0;
}