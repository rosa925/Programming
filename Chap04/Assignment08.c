/* 파일명: Assignment08.c
 * 내용: PA04. 반지름의 길이를 입력받아 구의 부피는 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.
 * 작성자: 박로사
 * 날짜: 2025.4.18
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int assignment08(void);

int main(void)
{
    int result = assignment08();
    return 0;
}

int assignment08(void)
{
    const double PI = 3.141592;
    double Radius;
    double Volume;

    printf("반지름의 길이? ");
    scanf("%lf", &Radius);

    Volume = (4.0 / 3.0) * PI * Radius * Radius * Radius;

    printf("구의 부피: %.6f\n", Volume);

    return 0;
}

