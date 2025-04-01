/* 파일명: Assignment07.c
 * 내용: PA02. 커피 사이즈와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.01
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as07(void);

int main()
{
    as07();
    return 0;
}

void as07(void)
{
    char size;
    int qua;

    printf("커피 사이즈(S, T, G)와 주문 수량? \n");
    scanf(" %c %d", &size, &qua);

    printf("%c사이즈 %d잔 주문합니다.\n", size, qua);

    return;
}
