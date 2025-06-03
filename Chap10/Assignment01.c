/* 파일명: Assignment01.c
 * 내용: PA10. 구조체를 사용해서 로그인 정보를 저장하고, 비밀번호는 *로 마스킹해서 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.6.03
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct LOGIN {
    char id[21];
    char pw[21];
};

int main(void) {
    struct LOGIN user;

    // 입력
    printf("ID? ");
    scanf("%20s", user.id);  // 최대 20자까지만 입력

    printf("Password? ");
    scanf("%20s", user.pw);

    // 출력
    printf("ID: %s\n", user.id);

    printf("PW: ");
    for (int i = 0; i < strlen(user.pw); i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
