/* 파일명: Assignment1.c
 * 내용: PA06. 함수 get_perimeter를 만들어서 매개변수로 가로, 세로 길이를 받아 직사각형의 둘레를 계산해서 반환하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int get_perimeter(int width, int height);  // 함수 선언

int main(void)
{
    int width, height;

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    int perimeter = get_perimeter(width, height);

    printf("직사각형의 둘레: %d\n", perimeter);

    return 0;
}

// 계산 함수
int get_perimeter(int width, int height)
{
    return 2 * (width + height);
}