#include "h_parent.h"

void createlistparent(listParent &l){
    first(l)=NIL;
    last(l) = NIL;
}

bool isempty(listParent l) {
    if (first(l) == NIL && last(l)==NIL) {
        return true;
    } else {
        return false;
    }
}

void createlementparent(address1 &p) {
    int id;
    string nama;
    int tgl_l;
    string tempat_l;
    int tahun_l;
    int umur;
    string alamat;
    string riwayat_p;

    p = new elmListParent;
    next(p) = NIL;
    prev(p) = NIL;

    cout << "================ Menambhakan data alumni pendidikan ================ " << endl << endl;

    cout << "* input Id alumni             : ";
    cin >> id;
    info(p).id = id;
    cout << endl;

    cout << "* input Nama alumni           : ";
    cin >> nama;
    info(p).nama = nama;
    cout << endl;

    cout << "* input Tanggal Lahir alumni  : ";
    cin >> tgl_l;
    info(p).tgl_l = tgl_l;
    cout << endl;

    cout << "* input Tempat Lahir alumni   : ";
    cin >> tempat_l;
    info(p).tempat_l = tempat_l;
    cout << endl;

    cout << "* input Tahun Lahir alumni    : ";
    cin >> tahun_l;
    info(p).tahun_l = tahun_l;
    cout << endl;

    info(p).umur = 2020 - info(p).tahun_l;
    cout << "* Umur alumni                 : " << info(p).umur;
    cout << endl;

    cout << "* input Alamat Rumah alumni   : ";
    cin >> alamat;
    info(p).alamat = alamat;
    cout << endl;

    cout << "* pilih jenis kelamin : " << endl;
    cout << "1.Laki Laki" << endl << "2.Perempuan" << endl;
    cout << "inputkan jenis kelamin : ";
    int nomor;
    cin >> nomor;
    if (nomor == 1) {
        info(p).jk = 'L';
    } else if ( nomor == 2) {
        info(p).jk = 'P';
    } else {
        cout << "Pilihan Tidak ada !!";
    }
    cout << endl;

    cout << "* input riwayat pendidikan             : ";
    cin >> riwayat_p;
    info(p).riwayat_p = riwayat_p;
    cout << endl;



}

void insertfirstparent(listParent &l,address1 p) {
    address1 q;
    if(isempty(l) == true) {
        first(l) = p;
        last(l) = p;
    } else {
        next(p) = first(l);
        prev(first(l)) = p;
        first(l) = p;
    }
}

void deletelastparent(listParent &l,address1 &p) {
    if(isempty(l) == true) {
        cout << "data kosong" << endl;
        p = NIL;
    } else if (next(first(l)) == NIL){
        p = first(l);
        first(l) = NIL;
        last(l) = NIL;
    } else {
        p = last(l);
        last(l) = prev(p);
        prev(p) = NIL;
        next(last(l)) = NIL;
    }
}

void deletefirstparent(listParent &l,address1 &p) {
    if(isempty(l) == true) {
        cout << "data kosong" << endl;
        p = NIL;
    } else if (next(first(l)) == NIL){
        p = first(l);
        first(l) = NIL;
        last(l) = NIL;
    } else {
        p = first(l);
        first(l) = next(p);
        prev(first(l)) = NIL;
        next(p) = NIL;
    }
}

void deleteelmtparent(listParent &l,address1 &p){
    address prec;
    int x;

    cout << "pilih data yang ingin di hapus berdasarkan : "
    cin >> x
    prec = first(l);
    while (next(prec) != NIL && info(prec).id != x) {
        p = next(p);
    }

    if (info(prec).id == x) {
        p = prec;
    } else {
        cout << "data tidak ada";
    }

    if (isempty(l) == true) {
        cout << "data kosong" << endl;
        p = NIL;
    } else if (next(last(l)) == NIL) {
        deletelastparent(l,p);
    } else if (prev(first(l)) == NIL){
        deletefirstparent(l,p);
    } else {
        prec = next(prec);
        prev(next(p)) = prec;
        prev(prec) = prev(p);
        next(p) = NIL;
        prev(p) = NIL;
    }
}

void tampildataparent(listParent l){
    address1 p;
    p = first(l);
    int i = 0;
    while (p != NIL){
        i = i + 1;
        cout << i <<"id alumni                 : " << info(p).id << endl;
        cout      <<" Nama alumni               : " << info(p).nama << endl;
        cout      <<" Tanggal lahir alumni      : " << info(p).tgl_l << endl;
        cout      <<" Tempat lahir alumni       : " << info(p).tempat_l << endl;
        cout      <<" Tahun lahir alumni        : " << info(p).tahun_l << endl;
        cout      <<" umur alumni               : " << info(p).umur << endl;
        cout      <<" alamat rumah alumni       : " << info(p).alamat << endl;
        cout      <<" Jenis kelamin alumni      : " << info(p).id << endl;
        cout      <<" Riwayat pendidikan alumni : " << info(p).riwayat_p << endl;
        p = next(p);
    }
}
