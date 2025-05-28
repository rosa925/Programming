/* 파일명: Assignment17.c
 * 내용: PA05. 주차 요금을 계산해서 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int minutes, fee;

    printf("주차 시간(분)? ");
    scanf("%d", &minutes);

    if (minutes <= 30) {
        fee = 2000;
    }
    else {
        int extra = (minutes - 30 + 9) / 10;  // 올림 처리
        fee = 2000 + (extra * 1000);
        if (fee > 25000)
            fee = 25000;
    }

    printf("주차 요금: %d원\n", fee);

    return 0;
}
