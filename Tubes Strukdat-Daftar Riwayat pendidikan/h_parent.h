#ifndef H_PARENT_H_INCLUDED
#define H_PARENT_H_INCLUDED


#include <iostream>
#define info(A) A->info
#define next(A) A->next
#define prev(A) A->prev
#define first(A) A.first
#define last(A) A.last
#define NIL NULL

using namespace std;

// tipe bentukan data yang digunakan

struct orang {
    int id;
    string nama;
    int tgl_l;
    string tempat_l;
    int tahun_l;
    int umur;
    string alamat;
    char jk;
    string riwayat_P;
};

// alamat kotak

typedef struct elmListParent * address1;

//Box kotaknya dari parent,relasi dan child

struct elmListParent{
    orang info;
    address1 next;
    address1 prev;
};

//List kotaknya dari parent,relasi dan child

struct listParent {
    address1 first;
    address1 last;
};


void createlistparent(listParent &l);
void createlementparent(address1 &p);
void insertfirst(listParent &l,address1 p);
void deleteelmt(listParent &l,address1 &p);


#endif // H_PARENT_H_INCLUDED

