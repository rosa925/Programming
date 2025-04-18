/* 파일명: Assignment17.c
 * 내용: PA04. 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다.
 *             7번째 비트만 1인 값, 15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.18
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int assignment17(void);

int main(void)
{
    assignment17();
    return 0;
}

int assignment17(void)
{
    int seven = 1 << 7;
    int fifteen = 1 << 15;
    int twentythree = 1 << 23;
    int thirtyone = 1 << 31;

    printf("7번 비트만 1인 값: %08X %d\n", seven, seven);
    printf("15번 비트만 1인 값: %08X %d\n", fifteen, fifteen);
    printf("23번 비트만 1인 값: %08X %d\n", twentythree, twentythree);
    printf("31번 비트만 1인 값: %08X %d\n", thirtyone, thirtyone);

    return 0;
}