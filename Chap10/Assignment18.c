/* 파일명: Assignment18.c
 * 내용: PA10. 음악 사이트에서 사용하는 플레이리스트 기능을 구현하는 프로그램
 * 작성자: 박로사
 * 날짜: 2025.6.03
 * 버전: 17.13.3
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX 5

struct SONG {
    char title[50];
    char artist[30];
    char genre[20];
    int playtime;
};

// 플레이리스트 출력 함수
void print_playlist(struct SONG* playlist[]) {
    int total = 0;
    printf("<< 플레이리스트 >>\n");
    for (int i = 0; i < MAX; i++) {
        if (playlist[i] != NULL) {
            printf("%s\t%s\t%s\t%d초\n", playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->playtime);
            total += playlist[i]->playtime;
        }
    }
    printf("총 재생시간 : %d초\n", total);
}

int main(void) {
    struct SONG songlist[] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"눈 떠보니 겨울", "방탄소년단", "ballad", 198},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "방탄소년단", "hip-hop", 209},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "방탄소년단", "ballad", 226},
        {"아낙네", "MINO", "hip-hop", 241}
    };
    int songCount = sizeof(songlist) / sizeof(songlist[0]);

    struct SONG* playlist[MAX] = { NULL };
    int count = 0;
    int choice;

    while (1) {
        printf("\n전체 곡 목록\n");
        for (int i = 0; i < songCount; i++) {
            printf("%d: %s\t%s\t%s\t%d초\n", i + 1, songlist[i].title, songlist[i].artist, songlist[i].genre, songlist[i].playtime);
        }

        printf("\n플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &choice);

        if (choice == 0) break;
        else if (choice < 1 || choice > songCount) {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }
        else if (count >= MAX) {
            printf("플레이리스트가 가득 찼습니다.\n");
            break;
        }

        playlist[count++] = &songlist[choice - 1];

        print_playlist(playlist);
    }

    return 0;
}
