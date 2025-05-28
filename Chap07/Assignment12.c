/* 파일명: Assignment10.c
 * 내용: PA07.  기차 좌석 예매 시스템
 * 작성자: 박로사
 * 날짜: 2025.5.28
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char seats[10] = { 'O','O','O','O','O','O','O','O','O','O' };
    int reserveCount;
    int reserved;

    while (1)
    {
        // 현재 좌석 상태 출력
        printf("현재 좌석: [ ");
        for (int i = 0; i < 10; i++)
            printf("%c", seats[i]);
        printf(" ]\n");

        // 예매 좌석 수 입력
        printf("예매할 좌석수? ");
        scanf("%d", &reserveCount);

        reserved = 0;
        printf("");

        // 좌석 예매
        for (int i = 0; i < 10 && reserved < reserveCount; i++)
        {
            if (seats[i] == 'O')
            {
                seats[i] = 'X';
                if (reserved == 0)
                    printf("%d", i + 1);
                else
                    printf(" %d", i + 1);
                reserved++;
            }
        }

        if (reserved > 0)
            printf(" 번 좌석을 예매했습니다.\n");

        // 예매할 수 없을 때 종료
        if (reserved < reserveCount)
        {
            printf("더 이상 예매할 수 없습니다.\n");
            break;
        }
    }

    return 0;
}
