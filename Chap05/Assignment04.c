/* 파일명: Assignment04.c
 * 내용: PA05. 연도를 입력받아 윤년인지 검사하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int year;

    printf("연도? ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d년은 윤년입니다.\n", year);
    }
    else
    {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }

    return 0;
}
