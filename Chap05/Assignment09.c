/* 파일명: Assignment09.c
 * 내용: PA05. 햄버거 가게의 계산서 프로그램
 * 작성자: 박로사
 * 날짜: 2025.4.23
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const int BURGER_PRICE = 4000;
    const int FRIES_PRICE = 2000;
    const int COLA_PRICE = 1500;
    const int SET_PRICE = 6500;

    int burger, fries, cola;
    int setCount;
    int remainBurger, remainFries, remainCola;
    int total = 0;

    // 입력
    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

    printf("햄버거 개수? ");
    scanf("%d", &burger);
    printf("감자튀김 개수? ");
    scanf("%d", &fries);
    printf("콜라 개수? ");
    scanf("%d", &cola);

    // 셋트 개수 계산
    setCount = (burger < fries ? burger : fries);
    setCount = (setCount < cola ? setCount : cola);

    // 나머지 단품 수량
    remainBurger = burger - setCount;
    remainFries = fries - setCount;
    remainCola = cola - setCount;

    // 가격 계산
    int setPrice = setCount * SET_PRICE;
    int burgerPrice = remainBurger * BURGER_PRICE;
    int friesPrice = remainFries * FRIES_PRICE;
    int colaPrice = remainCola * COLA_PRICE;
    total = setPrice + burgerPrice + friesPrice + colaPrice;

    // 출력
    printf("\n상품명     단가   수량   금액\n");
    if (setCount > 0)
        printf("세트     %5d   %2d   %5d\n", SET_PRICE, setCount, setPrice);
    if (remainBurger > 0)
        printf("햄버거   %5d   %2d   %5d\n", BURGER_PRICE, remainBurger, burgerPrice);
    if (remainFries > 0)
        printf("감자튀김 %5d   %2d   %5d\n", FRIES_PRICE, remainFries, friesPrice);
    if (remainCola > 0)
        printf("콜라     %5d   %2d   %5d\n", COLA_PRICE, remainCola, colaPrice);

    printf("----------------------------\n");
    printf("합계:                 %5d\n", total);

    return 0;
}
