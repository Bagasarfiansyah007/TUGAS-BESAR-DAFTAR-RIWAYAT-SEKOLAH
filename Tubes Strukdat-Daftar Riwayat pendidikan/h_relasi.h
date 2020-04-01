#ifndef H_RELASI_H_INCLUDED
#define H_RELASI_H_INCLUDED

#include "h_child.h"
#include "h_parent.h"
#include <iostream>
#include <stdlib.h>
#define nextR(A) A->nextR
#define topR(A) A->topR
#define botR(A) A->botR
#define firstR(A) A.firstR
#define lastR(A) A.lastR
#define NIL NULL

typedef struct elmListRelasi * address3;

struct elmListRelasi{
    address1 topR;
    address2 botR;
    address3 nextR;
};

struct listRelasi {
    address3 firstR;
    address3 lastR;
};

void createlistrelasi(listRelasi &l);
address3 createlementrelasi(address1 alumni,address2 jenjang);
void insertfirstrelasi(listRelasi &l,address3 p);
void inputrelasi(listRelasi &lr,listParent lp,list_Child lc);
void deleteelmtrelasi(listRelasi &l,listParent lp,list_Child lc,address3 &p);
void printListRelasi(listRelasi l);
void deletefirstrelasi(listRelasi &l,address3 &p);
void deletelastrelasi(listRelasi &l,address3 &p);
address3 carielementrelasi(listRelasi l,listParent lp,list_Child lc,int x,string jenjang);


#endif // H_RELASI_H_INCLUDED
