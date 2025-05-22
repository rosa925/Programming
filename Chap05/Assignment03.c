/* 파일명: Assignment03.c
 * 내용: PA05. 거스름돈의 금액을 이볅받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
 *             십원 미만 단위는 절사한다.
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int insert(void);
int calculate(void);
int output(void);

int main() {
    insert();
    calculate();
    output();
    return 0;
}

int insert(void) {
    int money;
    printf("거스름돈? ");
    scanf("%d", &money);
    money = (money / 10) * 10;
    printf("거스름돈 (10원미만 절사): %d\n", money);
    return 0;
}

int calculate(void) {
    int money;
    scanf("%d", &money);
    money = (money / 10) * 10;

    int count;

    count = 0;
    while (money >= 50000) {
        count++;
        money -= 50000;
    }

    count = 0;
    while (money >= 10000) {
        count++;
        money -= 10000;
    }

    count = 0;
    while (money >= 5000) {
        count++;
        money -= 5000;
    }

    count = 0;
    while (money >= 1000) {
        count++;
        money -= 1000;
    }

    count = 0;
    while (money >= 100) {
        count++;
        money -= 100;
    }

    count = 0;
    while (money >= 10) {
        count++;
        money -= 10;
    }

    return 0;
}

int output(void) {
    int money;
    scanf("%d", &money);
    money = (money / 10) * 10;

    int n50000 = 0, n10000 = 0, n5000 = 0, n1000 = 0, n100 = 0, n10 = 0;

    while (money >= 50000) {
        n50000++;
        money -= 50000;
    }
    while (money >= 10000) {
        n10000++;
        money -= 10000;
    }
    while (money >= 5000) {
        n5000++;
        money -= 5000;
    }
    while (money >= 1000) {
        n1000++;
        money -= 1000;
    }
    while (money >= 100) {
        n100++;
        money -= 100;
    }
    while (money >= 10) {
        n10++;
        money -= 10;
    }

    printf("50000원  %d장\n", n50000);
    printf("10000원  %d장\n", n10000);
    printf("  5000원  %d장\n", n5000);
    printf("  1000원  %d장\n", n1000);
    printf("  1 00원  %d개\n", n100);
    printf("    10원  %d개\n", n10);

    return 0;
}
