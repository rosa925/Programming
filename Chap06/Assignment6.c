/* 파일명: Assignment6.c
 * 내용: PA06.  사용자에게 메뉴를 반복 출력하면서 0~3 사이의 올바른 번호가 입력될 때까지 재입력을 유도하는 choose_menu() 함수를 작성하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int choose_menu(void);

int main(void)
{
    int menu;

    while (1)
    {
        menu = choose_menu();

        if (menu == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        switch (menu)
        {
        case 1:
            printf("파일 열기를 수행합니다.\n");
            break;
        case 2:
            printf("파일 저장을 수행합니다.\n");
            break;
        case 3:
            printf("인쇄를 수행합니다.\n");
            break;
        }
    }

    return 0;
}

// 메뉴 출력 및 선택 함수
int choose_menu(void)
{
    int sel;

    while (1)
    {
        printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] 선택? ");
        scanf("%d", &sel);

        if (sel >= 0 && sel <= 3)
            return sel;

        printf("잘못된 번호입니다. 다시 선택해주세요.\n");
    }
}
