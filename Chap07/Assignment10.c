/* 파일명: Assignment10.c
 * 내용: PA07. 3×3 행렬 2개를 더해서 결과를 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.28
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // 3x3 행렬 초기화
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];  // 결과 행렬

    // x + y 계산
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = x[i][j] + y[i][j];
        }
    }

    // 출력
    printf("x 행렬:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }

    printf("\ny 행렬:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", y[i][j]);
        }
        printf("\n");
    }

    printf("\nx + y 행렬:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
