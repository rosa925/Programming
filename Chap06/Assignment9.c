/* 파일명: Assignment9.c
 * 내용: PA06. RGB 색상의 보색을 구하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

 // 함수 선언
unsigned int make_rgb(unsigned int red, unsigned int green, unsigned int blue);
unsigned int get_red(unsigned int color);
unsigned int get_green(unsigned int color);
unsigned int get_blue(unsigned int color);

int main(void)
{
    unsigned int color;
    unsigned int r, g, b;
    unsigned int comp_r, comp_g, comp_b;
    unsigned int comp_color;

    printf("RGB 색상? ");
    scanf("%x", &color);

    r = get_red(color);
    g = get_green(color);
    b = get_blue(color);

    comp_r = 255 - r;
    comp_g = 255 - g;
    comp_b = 255 - b;

    comp_color = make_rgb(comp_r, comp_g, comp_b);

    printf("RGB %06X의 보색: %06X\n", color & 0xFFFFFF, comp_color);
    return 0;
}

unsigned int make_rgb(unsigned int red, unsigned int green, unsigned int blue)
{
    return (blue << 16) | (green << 8) | red;
}

// 색상 추출 함수들
unsigned int get_red(unsigned int color)
{
    return color & 0xFF;
}

unsigned int get_green(unsigned int color)
{
    return (color >> 8) & 0xFF;
}

unsigned int get_blue(unsigned int color)
{
    return (color >> 16) & 0xFF;
}
