#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>
#include <conio.h>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef char infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301213215(List &L);
adr newElement_1301213215(infotype x);
void show_1301213215(List L);
void insertLast_1301213215(List &L, adr p);
bool isVowel_1301213215(List &L);
void showLastK(List L, int K);
void percentage_1301213215(List &L);

#endif // SLL_H_INCLUDED

/* ketentuan TP
1301213215
NIM ke-9 = 4
1 mod 3 = 1
infotype = char
*/
