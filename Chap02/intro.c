/* 파일명: intro.c

 * 내용: PA02. 이름, 나이, 인사말을 입력받고 출력하는 코드

 * 작성자: 박로사

 * 날짜: 2025.3.19

 * 버전: 17.13.3

 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void introMe(void);

int main()
{
	introMe();

	return 0;

}

void introMe(void)
{
	char name[64];		//이름 저장할 변수
	int age;			//나이 저장할 변수
	char hello[256];	//인사말 저장할 변수

	// 1. 이름, 나이, 인사말을 입력받는다.
	printf("이름 나이 인사말을 입력해주세요:\n");
	scanf("%s %d %s", name, &age, hello);

	// 2. 이름, 나이, 인사말을 출력한다.
	printf("이름: %s 나이: %d\n인사말: %s", name, age, hello);

	return;
}