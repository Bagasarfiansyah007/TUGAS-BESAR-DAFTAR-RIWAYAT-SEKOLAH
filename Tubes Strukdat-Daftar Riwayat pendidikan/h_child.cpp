#include "h_child.h"
void createList(list_Child &L){
    first(L)=NULL;
    last(L)=NULL;
}
void createElmt(address2 &P, infotypeChild jenjang){
    P = new elmListChild;
    info(P) = jenjang;
    next(P) = NULL;
}
void insertFirst(list_Child &L, address2 P){
    if(first(L)== NULL){
        first(L)=P;
        last(L)=P;
    }else{
        next(P)=first(L);
        first(L)=P;
    }
}
void insertLast(list_Child &L, address2 P){
    if(first(L)==NULL){
        first(L)=P;
        last(L)=P;
    }else{
        next(last(L))=P;
        last(L)=P;
    }
}
void insertAfter(list_Child &L, address2 Prec, address2 P){

    if(Prec==NULL){
        cout<<"tidak ada"<<endl;
    }else if(Prec==last(L)){
        insertLast(L,P);
    }else{
        address2 Q = next(Prec);
        next(P)= Q;
        next(Prec)=P;
    }
}
void deletefirst(list_Child &L, address2 &P){
    address2 Q;
    if(first(L)==NULL){
        cout<<"list kosong"<<endl;
    }else{
        if(first(L)==last(L)){
            first(L)=NULL;
            last(L)==NULL;
        }else{
            P=first(L);
            Q=next(P);
            first(L)=Q;
            P=NULL;
        }
    }
}
void deleteLast(list_Child &L, address2 &P){
     if(first(L)==NULL){
        cout<<"list kosong"<<endl;
    }else{
        if(first(L)==last(L)){
            first(L)=NULL;
            last(L)==NULL;
        }else{
            P=last(L);
            address2 Q = first(L);
            while(next(Q)!=last(L)){
                Q=next(Q);
            }
            last(L)=Q;
            P=NULL;
        }

    }
}
void deleteAfter(list_Child &L, address2 Prec, address2 &P){
    if(first(L)==NULL){
        cout<<"list kosong"<<endl;
    }else{
        if(Prec==NULL){
            cout<<"prec tidak ditemukan"<<endl;
        }else{
            if(Prec == last(L)){
                cout<<"tidak ada data setelah prec"<<endl;
            }else if(next(Prec)==last(L)){
                deleteLast(L,P);
            }else{
                P=next(Prec);
                Prec=next(P);
                P=NULL;
            }
        }

    }
}
void printList(list_Child L){
    address2 P;
    P = first(L);
    while(P!=NULL){
        cout<<info(P)<<", ";
        P = next(P);
    }

}
address2 searchJenjang(list_Child L, infotypeChild jenjang){
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
