/* 파일명: Assignment01.c

 * 내용: PA02. printf문을 한번만 사용하여 출력하는 프로그램을 작성하시오.

 * 작성자: 박로사

 * 날짜: 2025.4.01

 * 버전: 17.13.3

 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as01(void);

int main()
{
	as01();

	return 0;

}

void as01(void)
{
	printf("int main(void)\n\t{\n\t\treturn0;\n\t}");

	return;
}