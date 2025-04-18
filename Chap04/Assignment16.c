/* 파일명: Assignment16.c
 * 내용: PA04. 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green,blue에 8비트씩을 사용해서 색상을 표현하므로 24비트 트루컬러라고 한다. 컴퓨터 시스템에서는
 *             32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 색상 정보를 저장하고 최상위 바이트는 사용하지 않고 0으로 채운다. 0~255 사이의 값을 red, green, blue의 순서로
 *             3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오. RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
 * 작성자: 박로사
 * 날짜: 2025.4.18
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int assignment16(void);

int main(void)
{
    assignment16();
    return 0;
}

int assignment16(void)
{
    unsigned int red, green, blue;
    unsigned int color;

    printf("red? ");
    scanf("%u", &red);

    printf("green? ");
    scanf("%u", &green);

    printf("blue? ");
    scanf("%u", &blue);

    red &= 0xFF;
    green &= 0xFF;
    blue &= 0xFF;

    color = (blue << 16) | (green << 8) | red;

    printf("RGB 트루컬러: %08X\n", color);

    return 0;
}
