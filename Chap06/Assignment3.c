/* 파일명: Assignment3.c
 * 내용: PA06.  두 점 사이의 거리를 구하는 distance 함수를 만들고, 이를 이용해 (x1, y1)과 (x2, y2) 사이의 직선 거리를 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>  // sqrt 함수 사용

double distance(int x1, int y1, int x2, int y2);

int main(void)
{
    int x1, y1, x2, y2;

    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &x1, &y1);

    printf("직선의 끝점 좌표? ");
    scanf("%d %d", &x2, &y2);

    double d = distance(x1, y1, x2, y2);

    printf("(%d, %d)~(%d, %d) 직선의 길이: %f\n", x1, y1, x2, y2, d);

    return 0;
}

// 거리 계산 함수
double distance(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}
