/* 파일명: Assignment09.c
 * 내용: PA02. 16진수 정수를 입력받아 10진수로 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.4.01
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as09(void);

int main()
{
    as09();
    return 0;
}

void as09(void)
{
    int num;

    printf("16진수 정수?");
    scanf("%x", &num);

    printf("16진수 %x는 10진수로 %d입니다. \n", num, num);

    return;
}
