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
    cout << "  1.Laki Laki" << endl << "  2.Perempuan" << endl;
    cout << "inputkan jenis kelamin        : ";
    int nomor;
    cin >> nomor;
    if (nomor == 1) {
        info(p).jk = "L";
    } else if ( nomor == 2) {
        info(p).jk = "P";
    } else {
        cout << "Pilihan Tidak ada !!";
    }
    cout << endl;

    cout << "* input riwayat pendidikan    : ";
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

address1 carielementparent(listParent l,int x) {
    address1 p;
    p = first(l);
    while (next(p) != NIL && info(p).id != x) {
        p = next(p);
    }

    if (info(p).id == x){
        return p;
    } else {
        return NIL;
    }
}

void deleteelmtparent(listParent &l,address1 &p){
    address1 prec,q;
    int x;

    if (isempty(l) == true) {
        cout << "data kosong" <<endl;
        p = NIL;
    } else {

        cout << "Masukan Data yang Ingin di hapus : ";
        cin >> x;

        prec = carielementparent(l,x);

        if (next(prec) == NIL){
            p = prec;
            deletelastparent(l,p);
        } else if (prev(prec) == NIL) {
            p = prec;
            deletefirstparent(l,p);
        } else {
            p = prec;
            prec = next(p);
            q = prev(p);
            next(q) = prec;
            prev(prec) = q;
            next(p) = NIL;
            prev(p) = NIL;
        }
    }
}

void tampildataparent(listParent l){
    address1 p;
    p = first(l);
    int i = 0;
    while (p != NIL){
        i = i + 1;
        cout << "| No :"<< " " << i << " "<<"| Id alumni :" << " " <<info(p).id<< " " <<"| TTL :" <<" " << info(p).tgl_l<<","<<info(p).tempat_l<<" "<<info(p).tahun_l << " ";
        cout << "| Umur :"<<" " << info(p).umur << " " << "| alamat :" << " " << info(p).alamat << " "<< "| riwayat_p :" << " " << info(p).riwayat_p  << " "<< endl;
        p = next(p);
    }
}
