/* 파일명: Assignment4.c
 * 내용: PA07. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.5.28
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // 배열 초기화
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int max = arr[0], min = arr[0];
    int max_index = 0, min_index = 0;

    // 배열 출력
    printf("배열: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    printf("\n");

    // 결과 출력
    printf("최댓값: 인덱스=%d, 값=%d\n", max_index, max);
    printf("최솟값: 인덱스=%d, 값=%d\n", min_index, min);

    return 0;
}
