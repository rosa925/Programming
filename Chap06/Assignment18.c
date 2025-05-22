/* 파일명: Assignment18.c
 * 내용: PA06. 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하고, main()에서 0~999 사이의 임의의 정수 3개를 생성하여 그 약수를 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.22
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 // 약수 출력 함수
void divisors(int n);

int main(void)
{
    int i;
    int num;

    // 랜덤 시드 설정
    srand((unsigned int)time(NULL));

    // 3개의 임의의 수 생성 및 약수 출력
    for (i = 0; i < 3; i++)
    {
        num = rand() % 1000;
        divisors(num);
    }

    return 0;
}

void divisors(int n)
{
    int count = 0;

    printf("%d의 약수: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("=> 총 %d개\n", count);
}
