/* 파일명: Assignment05.c
 * 내용: PA05. 섭씨는 화씨로 화씨는 섭씨로 변경하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    float temp, result;
    char scale;

    printf("온도? ");
    scanf("%f %c", &temp, &scale);

    if (scale == 'C' || scale == 'c')
    {
        result = (temp * 9.0 / 5.0) + 32;
        printf("%.2f C ==> %.2f F\n", temp, result);
    }
    else if (scale == 'F' || scale == 'f')
    {
        result = (temp - 32) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C\n", temp, result);
    }
    else
    {
        printf("단위는 C 또는 F만 입력하세요.\n");
    }

    return 0;
}
