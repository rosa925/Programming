/* 파일명: Assignment1.c
 * 내용: PA07. 첫 항과 공차를 입력받아, 크기가 10인 배열에 등차수열을 저장하고 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.28
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int seq[10];
    int first, diff;

    printf("첫 번째 항? ");
    scanf("%d", &first);

    printf("공차? ");
    scanf("%d", &diff);

    // 배열 채우기
    for (int i = 0; i < 10; i++)
    {
        seq[i] = first + i * diff;
    }

    // 출력
    printf("등차수열: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", seq[i]);
    }
    printf("\n");

    return 0;
}
