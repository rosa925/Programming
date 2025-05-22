/* 파일명: Assignment5.c
 * 내용: PA06.  두 점 사이의 거리를 구하는 distance 함수를 만들고, 이를 이용해 (x1, y1)과 (x2, y2) 사이의 직선 거리를 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int is_even(int n);
int is_odd(int n);

int main(void)
{
    int num;
    int even_count = 0;
    int odd_count = 0;

    printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (is_even(num))
            even_count++;
        else if (is_odd(num))
            odd_count++;
    }

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even_count, odd_count);

    return 0;
}

// 짝수 판단 함수
int is_even(int n)
{
    return n % 2 == 0;
}

// 홀수 판단 함수
int is_odd(int n)
{
    return n % 2 != 0;
}