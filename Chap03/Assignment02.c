/* 파일명: Assignment02.c
 * 내용: PA03. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as02(void);

int main()
{
    as02();
    return 0;
}

void as02(void)
{
    int width, height;
    int area, perimeter;

    printf("가로의 길이? ");
    scanf("%d", &width);

    printf("세로의 길이? ");
    scanf("%d", &height);

    area = width * height;
    perimeter = 2 * (width + height);

    printf("직사각형의 넓이: %d\n", area);
    printf("직사각형의 둘레: %d\n", perimeter);

    return;
}