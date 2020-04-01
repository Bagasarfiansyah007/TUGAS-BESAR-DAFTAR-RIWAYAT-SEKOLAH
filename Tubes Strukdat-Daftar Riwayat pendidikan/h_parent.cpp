#include "h_parent.h"

void createlistparent(listParent &l){
    firstP(l)=NIL;
    lastP(l) = NIL;
}

bool isempty(listParent l) {
    if (firstP(l) == NIL && lastP(l)==NIL) {
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
    string alamat;
    string riwayat_p;

    p = new elmListParent;
    nextP(p) = NIL;
    prevP(p) = NIL;

    cout << "================ Menambhakan data alumni pendidikan ================ " << endl << endl;

    cout << "* input Id alumni             : ";
    cin >> id;
    infoP(p).id = id;
    cout << endl;

    cout << "* input Nama alumni           : ";
    cin >> nama;
    infoP(p).nama = nama;
    cout << endl;

    cout << "* input Tanggal Lahir alumni  : ";
    cin >> tgl_l;
    infoP(p).tgl_l = tgl_l;
    cout << endl;

    cout << "* input Tempat Lahir alumni   : ";
    cin >> tempat_l;
    infoP(p).tempat_l = tempat_l;
    cout << endl;

    cout << "* input Tahun Lahir alumni    : ";
    cin >> tahun_l;
    infoP(p).tahun_l = tahun_l;
    cout << endl;

    infoP(p).umur = 2020 - infoP(p).tahun_l;
    cout << "* Umur alumni                 : " << infoP(p).umur;
    cout << endl;

    cout << "* input Alamat Rumah alumni   : ";
    cin >> alamat;
    infoP(p).alamat = alamat;
    cout << endl;

    cout << "* pilih jenis kelamin : " << endl;
    cout << "  1.Laki Laki" << endl << "  2.Perempuan" << endl;
    cout << "inputkan jenis kelamin        : ";
    int nomor;
    cin >> nomor;
    if (nomor == 1) {
        infoP(p).jk = "L";
    } else if ( nomor == 2) {
        infoP(p).jk = "P";
    } else {
        cout << "Pilihan Tidak ada !!";
    }
    cout << endl;


    cout << "Data Berhasil Ter input !!" << endl;

}

void insertfirstparent(listParent &l,address1 p) {
    if(isempty(l) == true) {
        firstP(l) = p;
        lastP(l) = p;
    } else {
        nextP(p) = firstP(l);
        prevP(firstP(l)) = p;
        firstP(l) = p;
    }
}

void deletelastparent(listParent &l,address1 &p) {
    if(isempty(l) == true) {
        cout << "data kosong" << endl;
        p = NIL;
    } else if (nextP(firstP(l)) == NIL){
        p = firstP(l);
        firstP(l) = NIL;
        lastP(l) = NIL;
    } else {
        p = lastP(l);
        lastP(l) = prevP(p);
        prevP(p) = NIL;
        nextP(lastP(l)) = NIL;
    }
}

void deletefirstparent(listParent &l,address1 &p) {
    if(isempty(l) == true) {
        cout << "data kosong" << endl;
        p = NIL;
    } else if (nextP(firstP(l)) == NIL){
        p = firstP(l);
        firstP(l) = NIL;
        lastP(l) = NIL;
    } else {
        p = firstP(l);
        firstP(l) = nextP(p);
        prevP(firstP(l)) = NIL;
        nextP(p) = NIL;
    }
}

address1 carielementparent(listParent l,int x) {
    address1 p;
    p = firstP(l);
    while (nextP(p) != NIL && infoP(p).id != x) {
        p = nextP(p);
    }

    if (infoP(p).id == x){
        return p;
    } else {
        return NIL;
    }
}

void deleteelmtparent(listParent &l,address1 &p){
    address1 prec,q;
    int x;

    if (isempty(l) == true) {
        cout << "data kosong" <<endl << endl;
        p = NIL;
    } else {

        cout << "jika ingin membatalkan ketik -1 " << endl << endl;
        cout << "Masukan Data yang Ingin di hapus berdasarkan id alumni: ";
        cin >> x;

        if (x != -1) {
            prec = carielementparent(l,x);

            if (prec == NIL) {
                cout << "data tidak ada !!" << endl;
            } else if (nextP(prec) == NIL){
                p = prec;
                deletelastparent(l,p);
                cout << "data dengan id " << x << " Terhapus !!" << endl;
            } else if (prevP(prec) == NIL) {
                p = prec;
                deletefirstparent(l,p);
                cout << "data dengan id " << x << " Terhapus !!" << endl;
            } else {
                p = prec;
                prec = nextP(p);
                q = prevP(p);
                nextP(q) = prec;
                prevP(prec) = q;
                nextP(p) = NIL;
                prevP(p) = NIL;
                cout << "data dengan id " << x << " Terhapus !!" << endl;
            }
        } else {
            cout << endl;
            cout << "anda keluar dari menu !!" << endl;
        }

    }
}

void tampildataparent(listParent l){
    address1 p;
    p = firstP(l);
    int i = 0;
    cout << "============================== Tampil Semua data alumni ==============================" << endl << endl;
    while (p != NIL){
        i = i + 1;
        cout << "| No :"<< " " << i << " "<<"| Id alumni :" << " " <<infoP(p).id<< " " <<"| TTL :" <<" " << infoP(p).tgl_l<<","<<infoP(p).tempat_l<<" "<<infoP(p).tahun_l << " ";
        cout << "| Umur :"<<" " << infoP(p).umur << " " << "| alamat :" << " " << infoP(p).alamat << " " << "| Jenis Kelamin :" << " " << infoP(p).jk  << " |" << endl;
        p = nextP(p);
    }
}
