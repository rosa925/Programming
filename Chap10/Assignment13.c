/* 파일명: Assignment13.c
 * 내용: PA10. 직사각형 정보를 나타내는 RECT를 정의하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.6.03
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

 // 점 구조체 정의
struct POINT {
    int x;
    int y;
};

// 사각형 구조체 정의 (POINT 구조체를 멤버로 가짐)
struct RECT {
    struct POINT left_bottom;
    struct POINT right_top;
};

// 출력 함수 정의
void print_rect(struct RECT r) {
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y,
        r.right_top.x, r.right_top.y);
}

int main(void) {
    struct RECT rect;

    // 사용자로부터 좌하단점 입력
    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // 사용자로부터 우상단점 입력
    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // 결과 출력
    print_rect(rect);

    return 0;
}