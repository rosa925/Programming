/* 파일명: Assignment10.c
 * 내용: PA02. 정수를 8진수, 10진수, 16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성하시오.
 * 8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고, 16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력한다.
 * 작성자: 박로사
 * 날짜: 2025.4.01
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as10(void);

int main()
{
    as10();
    return 0;
}

void as10(void)
{
    int num;

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
    printf("정수? ");
    scanf("%i", &num);

    printf(" 8진수: %o\n", num);
    printf("10진수: %d\n", num);
    printf("16진수: %X\n", num);

    return;
}