/*
	문제1 printf사용하여 이름 출력, 단 printf 한번만 사용
	1)홍길동
	2)홍 길 동
	3)홍  길  동

	문제2 본인의 이름, 주소, 전화번호 모니터 출력 - \n 문자 적절히 사용하여 출력형태 다듬기, 총 3번의 printf 사용
*/
#include <stdio.h>

int main(void)
{
	printf("문제 1 답 \n");
	printf("홍길동\n홍 길 동\n홍  길  동\n");
	printf("\n\n");

	printf("문제 2 답 \n");
	printf("이름 : 홍길동\n");
	printf("주소 : 대한민국 서울\n");
	printf("전화번호 : 010-1234-5678\n");
	return 0;
}