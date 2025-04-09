/* 파일명: Assignment01.c
 * 내용: PA04. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 속력은 m/s 단위로 입력받는다.
 * 작성자: 박로사
 * 날짜: 2025.4.
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