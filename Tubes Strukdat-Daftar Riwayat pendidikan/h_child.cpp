#include <iostream>
#include "child.h"
void createList(list_Child &L){
    first(L)=NULL;
    last(L)=NULL;
}
void createElmt(address2 &P){
    string jenjang;
    cin>>jenjang;
    P = new elmListChild;
    info(P) = jenjang;
    next(P) = NULL;
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

void deletefirst(list_Child &L, address2 &P){
    P=first(L);
    first(L)=next(P);
    P=NULL;
}
void deleteLast(list_Child &L, address2 &P){
     P = first(L);
        while(next(next(P))!= NULL){
            P = next(P);
        }
        last(L) = P;
        P = next(last(L));
        next(last(L))=NULL;

}
void deleteElmt(list_Child &L, address2 Prec){
    string jenjang;
    cout<<"jenjang yang ingin dihapus :"<<endl;
    cin>>jenjang;
    Prec = searchJenjang(L,jenjang);
    address2 P,Q;
    if(first(L)==NULL){
        cout<<"list kosong"<<endl;
    }else{

            if(Prec==NULL){
                cout<<"data tidak ada"<<endl;
            }else{
                if(next(first(L))==NULL && next(last(L))==NULL){
                    P=first(L);
                    first(L)=NULL;
                    last(L)=NULL;
                }else if(Prec==first(L)){
                    deletefirst(L,Prec);
                }else if(Prec==last(L)){
                    deleteLast(L,Prec);
                }else{
                    P=first(L);
                    while(P!=Prec){
                        P=next(P);
                    }
                    if(P==Prec){
                        Q = first(L);
                        while(next(Q)!= P){
                            Q=next(Q);
                        }
                        if(next(Q)==P){
                            next(Q)=next(P);
                            P=NULL;
                        }
                    }
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
    cout<<endl;

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
