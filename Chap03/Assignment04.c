/* 파일명: Assignment04.c
 * 내용: PA03. 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
 * 힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as04(void);

int main()
{
    as04();
    return 0;
}

void as04(void)
{
    float force, distance, work;

    printf("힘(N)? ");
    scanf("%f", &force);

    printf("이동거리(m)? ");
    scanf("%f", &distance);

    work = force * distance;

    printf("일의 양: %.2f J\n", work);

    return;
}