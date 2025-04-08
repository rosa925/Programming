/* 파일명: Assignment03.c
 * 내용: PA03. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 높이는 m 단위로 입력받는다.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as03(void);

int main()
{
    as03();
    return 0;
}

void as03(void)
{
    float mass, height, energy;
    const float g = 9.8f;

    printf("질량(kg)? ");
    scanf("%f", &mass);

    printf("높이(m)? ");
    scanf("%f", &height);

    energy = mass * g * height;

    printf("위치에너지: %.6f J\n", energy);

    return;
}