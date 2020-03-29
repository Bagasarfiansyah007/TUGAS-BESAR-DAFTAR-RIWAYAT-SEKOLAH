#ifndef H_CHILD_H_INCLUDED
#define H_CHILD_H_INCLUDED
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next
using namespace std;
typedef struct elmListChild *address2;
typedef string infotypeChild;
struct elmListChild{
    infotypeChild info;
    address2 next;
};
struct list_Child{
    address2 first;
    address2 last;
};
void createList(list_Child &L);
void createElmt(address2 &P);
void insertFirst(list_Child &L, address2 P);
void insertLast(list_Child &L, address2 P);
void insertAfter(list_Child &L, address2 Prec, address2 P);
void deletefirst(list_Child &L, address2 &P);
void deleteLast(list_Child &L, address2 &P);
void deleteAfter(list_Child &L, address2 Prec, address2 &P);
void printList(list_Child L);
address2 searchJenjang(list_Child L, infotypeChild jenjang);



#endif // H_CHILD_H_INCLUDED
