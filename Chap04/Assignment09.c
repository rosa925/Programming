/* 파일명: Assignment09.c
 * 내용: PA04. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
 * 작성자: 박로사
 * 날짜: 2025.4.18
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int assignment09(void);

int main(void)
{
    int result = assignment09();
    return 0;
}

int assignment09(void)
{
    int totalSeconds;
    int Hours, Minutes, Seconds;

    printf("재생시간(초)? ");
    scanf("%d", &totalSeconds);

    Hours = totalSeconds / 3600;
    Minutes = (totalSeconds % 3600) / 60;
    Seconds = totalSeconds % 60;

    printf("재생시간은 %d시간 %d분 %d초입니다.\n", Hours, Minutes, Seconds);

    return 0;
}
