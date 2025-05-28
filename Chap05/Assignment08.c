/* 파일명: Assignment08.c
 * 내용: PA05. 비트 연산을 수행하는 계산기 프로그램
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    unsigned int a, b, result;
    char op;

    printf("비트 연산식? ");
    scanf("%i %c %i", &a, &op, &b);  // %i는 10, 8, 16진수 모두 자동 해석

    // 연산자에 따라 처리
    switch (op)
    {
    case '&':
        result = a & b;
        break;
    case '|':
        result = a | b;
        break;
    case '^':
        result = a ^ b;
        break;
    default:
        printf("지원하지 않는 연산자입니다.\n");
        return 1;
    }

    // 결과 출력
    printf("%X %c %X = %X\n", a, op, b, result);

    return 0;
}
