 #include "h_relasi.h"


void createlistrelasi(listRelasi &l) {
    firstR(l) = NIL;
    lastR(l) = NIL;
}

address3 createlementrelasi(address1 alumni,address2 jenjang) {
    address3 p = new elmListRelasi;
    nextR(p) = NIL;
    topR(p)  = alumni;
    botR(p)  = jenjang;

    return p;
}

void insertfirstrelasi(listRelasi &l,address3 p) {
    if(firstR(l)==NULL){
        firstR(l)=p;
        lastR(l)=p;
    }else{
        nextR(lastR(l))=p;
        lastR(l)=p;
    }
}

void inputrelasi (listRelasi &lr,listParent lp,list_Child lc) {
    address1 p;
    address2 q;
    address3 r;
    int x;
    string jenjang;

    tampildataparent(lp);
    cout << endl;

    cout << "masukan Id alumni yang ingin di Relasikan : ";
    cin >> x;
    p = carielementparent(lp,x);

    if (p != NIL) {
        system("CLS");
        printListchild(lc);
        cout << endl;

        cout << "masukan Jenjang alumni yang ingin di Relasikan : ";
        cin >> jenjang;
        q = searchJenjang(lc,jenjang);

        if (q != NIL) {
            r = createlementrelasi(p,q);
            insertfirstrelasi(lr,r);
            cout << endl;
            cout << "data berhasil di input !!" << endl;
        } else {
            system("CLS");
            cout << "data Jenjang tidak ada !!" << endl;
        }

    } else {
        system("CLS");
        cout << "data ID alumni tidak ada !!" << endl;
        system("PAUSE");
    }

}

void deletefirstrelasi(listRelasi &l,address3 &p) {
    p =firstR(l);
    firstR(l) = nextR(p);
    p = NULL;
}

void deletelastrelasi(listRelasi &l,address3 &p) {
    p = firstR(l);
    while(nextR(nextR(p))!= NULL){
        p = nextR(p);
    }
    lastR(l) = p;
    p = nextR(lastR(l));
    nextR(lastR(l))=NULL;
}

void deleteelmtrelasi(listRelasi &l,listParent lp,list_Child lc,address3 &p) {
    address3 prec;
    int x;
    string jenjang;

    if (firstR(l) == NIL && lastR(l) == NIL) {
        cout << "data kosong" <<endl << endl;
        p = NIL;
    } else {
        prec = carielementrelasi(l,lp,lc,x,jenjang);

        if (prec == NIL) {
            p = NIL;
        } else if (nextR(firstR(l)) == firstR(l)) {
            firstR(l) = NIL;
            lastR(l) = NIL;
        } else if (prec == firstR(l)){
            p = prec;
            deletefirstrelasi(l,p);
        } else if (prec == lastR(l)) {
            p = prec;
            deletelastrelasi(l,p);
        } else {
            p = prec;
            prec = firstR(l);
            while(nextR(prec)!= p){
                prec = nextR(prec);
            }
            nextR(prec) = nextR(p);
            nextR(p) = NIL;
        }
    }


}

address3 carielementrelasi(listRelasi l,listParent lp,list_Child lc,int x,string jenjang) {
    address1 q;
    address2 r;
    address3 p;


    p = firstR(l);
    if (x != NIL) {
        q = firstP(lp);
        while (nextP(q) != NIL && infoP(q).id != x) {
            q = nextP(q);
        }

        while (nextR(p) != NIL && topR(p) != q) {
            p = nextR(p);
        }

        if (topR(p) == q) {
            return p;
        } else {
            return NIL;
        }

    } else {
        r = first(lc);
        while (next(r) != NIL && info(r) != jenjang) {
            r = next(r);
        }

        while (nextR(p) != NIL && botR(p) != r) {
            p = nextR(p);
        }

        if (botR(p) == r) {
            return p;
        } else {
            return NIL;
        }

    }
}

void printListRelasi(listRelasi l) {
    address3 p;

    if (firstR(l) == NIL) {
        cout << "data kosong !!" << endl;
    } else {
        p = firstR(l);
        int i = 0;
        while (nextR(p) != NIL) {
            cout << "awokawokwa" << endl;
            /**i = i + 1;
            cout << "| No : " << i << " | Id Alumni : " << infoP(topR(p)).id ;
            p = nextR(p);**/
        }
        //cout << "| No : " << i << " | Id Alumni : " << infoP(topR(p)).id ;
    }
    /**while (nextR(p) != NIL) {
        i = i + 1;
        cout << "| No : " << i << " | Id Alumni : " << infoP(topR(p)).id << " | Nama Alumni : " << infoP(topR(p)).nama ;
        cout << " | Umur Alumni : " << infoP(topR(p)).umur << " | Alamat Alumni : " << infoP(topR(p)).alamat ;
        cout << " | Jenis Kelamin : " << infoP(topR(p)).jk << " | Riwayat Pendidikan : " << info(botR(p)) ;
        cout << endl;
        p = nextR(p);
    }**/
}



