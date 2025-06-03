/* 파일명: Assignment08.c
 * 내용: PA10. 커피숍의 제품 정보를 저장하는 구조체 PRODUCT를 정의하고, 해당 구조체를 인자로 받아 출력하는 함수 print_product를 구현하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.6.03
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

 // PRODUCT 구조체 정의
struct PRODUCT {
    char name[30];
    int price;
    int stock;
};

// 출력 함수 정의
void print_product(struct PRODUCT p) {
    printf("[%s %d원 재고:%d]\n", p.name, p.price, p.stock);
}

int main(void) {
    struct PRODUCT item;

    // 사용자로부터 입력 받기
    printf("제품명? ");
    scanf("%s", item.name);

    printf("가격? ");
    scanf("%d", &item.price);

    printf("재고? ");
    scanf("%d", &item.stock);

    // 출력 함수 호출
    print_product(item);

    return 0;
}
