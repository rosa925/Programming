/* 파일명: Assignment01.c
 * 내용: PA05. 점의 좌표(x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오. 스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다.
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x1, y1;  // 좌상단점
    int x2, y2;  // 우하단점
    int px, py;  // 점의 좌표

    // 입력 받기
    printf("선택 영역의 좌상단점 ? ");
    scanf("%d %d", &x1, &y1);

    printf("선택 영역의 우하단점? ");
    scanf("%d %d", &x2, &y2);

    printf("점의 좌표? ");
    scanf("%d %d", &px, &py);

    // 점이 사각형 영역 내에 있는지 검사
    if (px >= x1 && px <= x2 && py >= y1 && py <= y2)
    {
        printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
    }
    else
    {
        printf("선택 영역 밖의 점입니다.\n");
    }

    return 0;
}
