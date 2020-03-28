#ifndef H_PARENT_H_INCLUDED
#define H_PARENT_H_INCLUDED

typedef orang infotype;

// alamat kotak

typedef struct elmListParent * address1;

//Box kotaknya dari parent,relasi dan child

struct elmListParent{
    infotype orang;
    address1 next;
    address1 prev;
};

//List kotaknya dari parent,relasi dan child

struct listParent {
    address1 first;
    address1 last;
};

// tipe bentukan data yang digunakan

struct orang {
    int Id;
    string nama;
    string ttl;
    string alamat;
    char jk;
    string riwayat_P;
};


#endif // H_PARENT_H_INCLUDED
