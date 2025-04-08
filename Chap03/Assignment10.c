/* 파일명: Assignment10.c
 * 내용: PA03. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as10(void);

int main()
{
    as10();
    return 0;
}

void as10(void)
{
    float usd, rate, krw;

    printf("USD? ");
    scanf("%f", &usd);

    printf("원/달러 환율? ");
    scanf("%f", &rate);

    krw = usd * rate;

    printf("USD %.2f = KRW %.2f\n", usd, krw);

    return;
}