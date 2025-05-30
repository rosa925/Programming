#include "Contact.h"
#include <stdio.h>
#include <string.h>

int isEqualContact(Contact a, Contact b) {
    if (a.year == b.year && a.gender == b.gender &&
        strcmp(a.name, b.name) == 0 &&
        strcmp(a.phone, b.phone) == 0)
        return 1;
    return 0;
}

void PrintContact(Contact ct) {
    printf("이름 : %s\n", ct.name);
    printf("전화 : %s\n", ct.phone);
    printf("성별 : %s\n", ct.gender == MAN ? "남자" : "여자");
    printf("연도 : %d\n", ct.year);
}

int isEqualContactPtr(Contact* a, Contact* b) {
    if (a->year == b->year && a->gender == b->gender &&
        strcmp(a->name, b->name) == 0 &&
        strcmp(a->phone, b->phone) == 0)
        return 1;
    return 0;
}

void PrintContactPtr(Contact* ct) {
    printf("이름 : %s\n", ct->name);
    printf("전화 : %s\n", ct->phone);
    printf("성별 : %s\n", ct->gender == MAN ? "남자" : "여자");
    printf("연도 : %d\n", ct->year);
}
