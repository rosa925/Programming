#pragma once
#ifndef _CONTACT_123457576
#define _CONTACT_123457576

enum gender { MAN, WOMAN };
typedef enum gender Egender;

struct contact {
    char name[24];
    char phone[24];
    Egender gender;
    int year;
};

typedef struct contact Contact;

int isEqualContact(Contact a, Contact b);
void PrintContact(Contact ct);
int isEqualContactPtr(Contact* a, Contact* b);
void PrintContactPtr(Contact* ct);

#endif // _CONTACT_123457576