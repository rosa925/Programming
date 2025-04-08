/* 파일명: Assignment07.c
 * 내용: PA03. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
 * 실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.23422처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고 
 * 제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void as07(void);

int main()
{
    as07();
    return 0;
}

void as07(void)
{
    double num, square, cube;

    printf("실수? ");
    scanf("%lf", &num);

    square = pow(num, 2);
    cube = pow(num, 3);

    printf("제곱: %e\n", square);
    printf("세제곱: %e\n", cube);

    return;
}