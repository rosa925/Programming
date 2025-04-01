/* 파일명: Assignment11.c
 * 내용: PA02. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오. 
 * 소수점 이하 2자리까지, 소수점 이하 4자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력하고, 지수 표기로도 출력해본다. 
 * 작성자: 박로사
 * 날짜: 2025.4.01
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as11(void);

int main()
{
    as11();
    return 0;
}

void as11(void)
{
    double pi = 3.17159265;

    printf("pi = %.2lf\n", pi);
    printf("pi = %.4lf\n", pi);
    printf("pi = %.6lf\n", pi);
    printf("pi = %.8lf\n", pi);
    printf("pi = %e", pi);

    return;
}