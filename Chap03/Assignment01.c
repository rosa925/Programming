/* 파일명: Assignment01.c
 * 내용: PA03. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as01(void);

int main()
{
    as01();
    return 0;
}

void as01(void)
{
    int length;
    int area, perimeter;

    printf("한 변의 길이 ? ");
    scanf("%d", &length);

    area = length * length;
    perimeter = length * 4;

    printf("정사각형의 넓이: %d\n", area);
    printf("정사각형의 둘레: %d\n", perimeter);

    return;
}