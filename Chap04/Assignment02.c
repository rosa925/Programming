/* 파일명: Assignment02.c
 * 내용: PA04. 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.09
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int assignment02(void);
double getTem(double A);

int main(void)
{
    int r = assignment02();
    return 0;
}

int assignment02(void)
{
    double A = 0.0;

    printf("화씨온도? ");
    scanf("%lf", &A);

    double Tem = getTem(A);

    printf("%.2f F = %.2f C\n", A, Tem);

    return 0;
}

double getTem(double A)
{
    return (A - 32.0) * 5.0 / 9.0;
}
