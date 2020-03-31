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

const int n = 100;
// tipe bentukan data yang digunakan

struct orang {
    int id;
    string nama;
    int tgl_l;
    string tempat_l;
    int tahun_l;
    int umur;
    string alamat;
    string jk;
    string riwayat_p;
};

struct user {
    string username;
    string password;
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
bool isempty(listParent l);
void createlementparent(address1 &p);
void insertfirstparent(listParent &l,address1 p);
void deleteelmtparent(listParent &l,address1 &p);
void deletelastparent(listParent &l,address1 &p);
void deletefirstparent(listParent &l,address1 &p);
address1 carielementparent(listParent l,int x);
void tampildataparent(listParent l);


#endif // H_PARENT_H_INCLUDED

