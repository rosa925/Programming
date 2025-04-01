/* 파일명: Assignment05.c

 * 내용: PA02. 몸무게를 입력받아서 출력하는 프로그램

 * 작성자: 박로사

 * 날짜: 2025.4.01

 * 버전: 17.13.3

 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as0５(void);

int main()
{
    as0５();
    return 0;
}

void as0５(void)
{
    float weight;
    printf("몸무게?");
    scanf("%f", &weight);
    printf("입력한 몸무게는 %.2fKG입니다.\n", weight);
    
    return;
}