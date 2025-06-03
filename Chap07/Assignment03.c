/* 파일명: Assignment03.c
 * 내용: PA10. LOGIN 구조체 배열을 만들어 ID/PW 정보를 저장하고, 사용자가 입력한 ID와 PW가 등록된 정보와 일치하는지 확인하는 프로그램
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

int main(void)
{
    struct LOGIN users[5] = {
        {"admin", "root"},
        {"guest", "idontknow"},
        {"user1", "pass123"},
        {"user2", "hello"},
        {"test", "test123"}
    };

    char inputID[21], inputPW[21];

    while (1) {
        printf("ID? ");
        scanf("%20s", inputID);

        if (strcmp(inputID, ".") == 0)
            break;

        printf("PW: ");
        scanf("%20s", inputPW);

        int success = 0;

        for (int i = 0; i < 5; i++) {
            if (strcmp(inputID, users[i].id) == 0 &&
                strcmp(inputPW, users[i].pw) == 0) {
                success = 1;
                break;
            }
        }

        if (success)
            printf("로그인 성공\n");
        else
            printf("로그인 실패\n");
    }

    return 0;
}
