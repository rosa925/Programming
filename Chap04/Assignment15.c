/* 파일명: Assignment15.c
 * 내용: PA04. 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료ㅛ를 더해서 환율이 결정된다. 환전 수수료는 환전우대율에 따라 달라진다.
 *             환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객ㄱ마다 다르게 책정된다. 환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 
 *             달러를 살 떼 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.18
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int assignment05(void);

int main(void)
{
    int result = assignment05();
    return 0;
}

int assignment05(void)
{
    const double FEE_RATE = 0.0175;
    double baseRate, benefitRate, fee, finalRate, usdAmount, krw;

    printf("원/달러 매매기준율? ");
    scanf("%lf", &baseRate);

    printf("환율우대율(0~100%%)? ");
    scanf("%lf", &benefitRate);

    fee = baseRate * FEE_RATE * (1.0 - benefitRate / 100.0);

    finalRate = baseRate + fee;

    printf("달러 살 때 환율은 %.6f입니다.\n", finalRate);

    printf("구입할 달러(USD)? ");
    scanf("%lf", &usdAmount);

    krw = finalRate * usdAmount;

    printf("USD %.2f 살 때 ==> KRW %.2f\n", usdAmount, krw);

    return 0;
}