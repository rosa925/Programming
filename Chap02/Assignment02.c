/* 파일명: Assignment02.c

 * 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수, 학점은 실수로 입력받는다.

 * 작성자: 박로사

 * 날짜: 2025.4.01

 * 버전: 17.13.3

 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void as02(void);

int main()
{
    as02();
    return 0;
}

void as02(void)
{
    int studentID;
    float grade;

    printf("번호? ");
    scanf("%d", &studentID);

    printf("학점? ");
    scanf("%f", &grade);

    printf("%02d번 학생의 학점은 %f입니다.\n", studentID, grade);

    return;
}
