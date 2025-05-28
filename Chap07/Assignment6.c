/* 파일명: Assignment6.c
 * 내용: PA07. 크기 10의 실수형 배열을 생성하고, 해당 배열을 역순으로 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.28
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // 실수형 배열 초기화
    float arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

    // 원래 순서 출력
    printf("배열: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    // 역순 출력
    printf("역순: ");
    for (int i = 9; i >= 0; i--) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    return 0;
}
