#include "h_child.h"
void createListchild(list_Child &L){
    first(L)=NULL;
    last(L)=NULL;
}
void createElmtchild(address2 &P){
    string jenjang;

    P = new elmListChild;
    next(P) = NULL;

    cout << "================ Menambhakan data Riwayat Pendidikan ================ " << endl << endl;

    cout << "* input Riwayat Pendidikan Alumni             : ";
    cin >> jenjang;
    info(P) = jenjang;
    cout << endl;
}

void insertLastchild(list_Child &L, address2 P){

    if (first(L) == NIL && last(L) == NIL) {
        first(L) = P;
        last(L) = P;
        next(P) = first(L);
    } else {
        next(P) = first(L);
        first(L) = P ;
        next(last(L)) = first(L);
    }
}

void deletefirstchild(list_Child &L, address2 &P){
    P =first(L);
    first(L) = next(P);
    next(last(L))= first(L);
    next(P) = NIL;
}
void deleteLastchild(list_Child &L, address2 &P){
    address2 q;
    P = last(L);
    q = first(L);

    while (next(q) != P) {
        q = next(q);
    }

    last(L) = q;
    next(q) = first(L);
    next(P) = NIL;

}
void deleteElmtchild(list_Child &L, address2 &P){
    string jenjang;
    address2 prec;
    if(prec == NULL){
        cout<<"list kosong"<<endl;
        P = NIL;
    }else{
        cout << "jika ingin membatalkan ketik 'tidak' " << endl << endl;
        cout << "Masukan Data yang Ingin di hapus berdasarkan Jenjang : ";
        cin>>jenjang;

        if (jenjang != "tidak") {

            prec = searchJenjang(L,jenjang);

            if(prec==NULL){
                cout<<"data tidak ada"<<endl;
            } else if(next(first(L)) == NULL){
                    P=first(L);
                    first(L)=NULL;
                    last(L)=NULL;
                    cout << "data dengan nama '" << jenjang << "' Terhapus !!" << endl;
            }else if(prec==first(L)){
                    P = prec;
                    deletefirstchild(L,P);
                    cout << "data dengan nama '" << jenjang << "' Terhapus !!" << endl;
            }else if(prec==last(L)){
                    deleteLastchild(L,P);
                    cout << "data dengan nama '" << jenjang << "' Terhapus !!" << endl;
            }else{
                    P=prec;
                    prec = first(L);
                    while(next(prec)!= P){
                        prec = next(prec);
                    }
                    next(prec)=next(P);
                    next(P)=NULL;
                    cout << "data dengan nama '" << jenjang << "' Terhapus !!" << endl;
                }
            } else{
                cout << endl;
                cout << "anda keluar dari menu !!" << endl;
            }
    }
}
void printListchild(list_Child L){
    address2 P;
    int i = 0;
    P = first(L);

    cout << "=============================== Riwayat Pendidikan yang tersedia =============================== " << endl << endl;

    while(next(P)!=first(L)){
        i = i + 1;
        cout << i << "." << info(P) << endl;
        P = next(P);
    }

    i = i + 1;
    cout << i << "." << info(P) << endl;

    cout<<endl;

}
address2 searchJenjang(list_Child L, string jenjang){

    address2 P;
    if(first(L)!=NULL){
        P = first(L);
        while(info(P)!=jenjang){
            P=next(P);
        }
        if(info(P)==jenjang){
            return P;
        }else{
            return NULL;
        }
    }

}
