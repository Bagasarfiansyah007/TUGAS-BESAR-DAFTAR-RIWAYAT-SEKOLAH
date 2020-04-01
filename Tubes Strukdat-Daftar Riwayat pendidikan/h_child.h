#ifndef H_CHILD_H_INCLUDED
#define H_CHILD_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next
#define NIL NULL

using namespace std;

typedef struct elmListChild *address2;

struct elmListChild{
    string info;
    address2 next;
};
struct list_Child{
    address2 first;
    address2 last;
};
void createListchild(list_Child &L);
void createElmtchild(address2 &P);
void insertLastchild(list_Child &L, address2 P);
void deletefirstchild(list_Child &L, address2 &P);
void deleteLastchild(list_Child &L, address2 &P);
void deleteElmtchild(list_Child &L,address2 &P);
void printListchild(list_Child L);
address2 searchJenjang(list_Child L, string jenjang);



#endif // H_CHILD_H_INCLUDED
