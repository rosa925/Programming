/* 파일명: Assignment06.c
 * 내용: PA03. 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1 제곱미터는 0.3025평에 해당한다.
 * 프로그램을 작성할 때 이름 있는 상수를 이용해보자.
 * 작성자: 박로사
 * 날짜: 2025.4.08
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as06(void);

int main()
{
    as06();
    return 0;
}

void as06(void)
{
    const float PYEONG = 0.3025f;
    float sqm, pyeong;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%f", &sqm);

    pyeong = sqm * PYEONG;

    printf("%.2f 제곱미터 = %.2f 평\n", sqm, pyeong);

    return;
}