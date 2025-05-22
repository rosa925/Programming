/* 파일명: Assignment19.c
 * 내용: PA06.임의의 수치 3개를 생성하고, 각 수치를 기준으로 스케일에 따라 '*' 문자를 출력하는 막대 그래프를 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int value, int scale);

int main(void)
{
    int i;
    int value;

    // 난수 초기화
    srand((unsigned int)time(NULL));

    // 3개의 난수 생성 및 그래프 출력
    for (i = 0; i < 3; i++)
    {
        value = rand() % 10000;
        graph(value, 100);
    }

    return 0;
}

// 그래프 출력 함수 정의
void graph(int value, int scale)
{
    int count = value / scale;

    printf("%4d: ", value);
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf("\n");
}
