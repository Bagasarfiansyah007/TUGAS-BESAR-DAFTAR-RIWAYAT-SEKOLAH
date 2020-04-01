#include "h_relasi.h"
int main()
{
    listParent l;
    list_Child lc;
    listRelasi lr;
    address1 p;
    address2 q;
    address3 r;
    int i,j,x,pilihan;
    user datauser[n];
    string jenjang,username,password,kode;

    cout << "Selamat datang Di program penginputan data alumni " << endl;
    cout << "Silahkan  Login terlebih dahulu !!" << endl;

    cout << "1.Login" << endl;
    cout << "2.Registrasi (hanya admin)" << endl;

    cout << endl << "pilih Menu : " ;
    cin >> pilihan ;

    while (pilihan != 0){
        if (pilihan == 1 ) {
            system("CLS");
            cout << "Selamat datang Di program penginputan data alumni " << endl;
            cout << "Silahkan  Login terlebih dahulu !!" <<  endl;
            cout << endl;

            cout << "Username : ";
            cin >> username;
            cout << endl;

            cout << "password : ";
            cin >> password;
            cout << endl;

            j = -1;
            bool kondisi = true;
            while (kondisi != false) {
                j = j + 1;
                if (username == datauser[j].username && password == datauser[j].password) {
                    kondisi = false;
                } else {
                    kondisi = false;
                }
            }
                if ( username == datauser[j].username && password == datauser[j].password) {
                    createlistparent(l);
                    createListchild(lc);
                    system("CLS");
                    cout << "Hai selamat datang " << username << "!!!" << endl;
                    cout << "disini kamu bisa menginputkan data alumni" << endl << endl;

                    cout << "Pilih Menu yang ingin di inputkan" << endl;
                    cout << endl;
                    cout << "================== INSERT DATA ==================" <<endl << endl;
                    cout << "1.Insert Data Alumni" << endl;
                    cout << "2.Insert Data Pendidikan" << endl;
                    cout << "3.Insert Pemilihan Jenjang Pendidikan" << endl << endl;
                    cout << "=================== EDIT DATA ===================" <<endl << endl;
                    cout << "4.Edit Data Alumni" << endl;
                    cout << "5.Edit Data Pendidikan" << endl << endl;

                    cout << "================== DELETE DATA ==================" <<endl << endl;

                    cout << "6.Hapus Data Alumni" << endl;
                    cout << "7.Hapus Data Pendidikan" << endl << endl;

                    cout << "================== SEARCH DATA ==================" <<endl << endl;

                    cout << "8.Cari Data" << endl << endl;

                    cout << "=================== VIEW DATA ===================" <<endl << endl;

                    cout << "9.Tampil Data" << endl;

                    cout << "0.keluar" << endl;
                    cout << endl;
                    cout << "pilihan : ";
                    cin  >> pilihan;

                    while (pilihan != 0) {
                        if (pilihan == 1) {
                            system("CLS");
                            createlementparent(p);
                            insertfirstparent(l,p);
                            system("PAUSE");
                        } else if (pilihan == 2) {
                            system("CLS");
                            cout << endl;
                            createElmtchild(q);
                            insertLastchild(lc,q);
                            cout << "data terinput" << endl << endl;
                            system("PAUSE");
                        } else if (pilihan == 3) {
                            system("CLS");
                            inputrelasi(lr,l,lc);
                            cout << endl;
                            system("PAUSE");
                        } else if (pilihan == 4) {
                            printListRelasi(lr);
                            system("PAUSE");
                        } else if (pilihan == 5) {
                            printListchild(lc);
                            system("PAUSE");
                        } else if (pilihan == 6) {
                            system("CLS");
                            tampildataparent(l);
                            cout << endl;
                            deleteelmtparent(l,p);
                            system("PAUSE");
                        } else if (pilihan == 7) {
                            system("CLS");
                            printListchild(lc);
                            cout << endl;
                            deleteElmtchild(lc,q);
                            system("PAUSE");
                        } else if (pilihan == 8) {

                        } else if (pilihan == 9) {

                        } else if (pilihan == 10) {

                        }

                        system("CLS");
                        cout << "Hai selamat datang " << username << "!!!" << endl;
                        cout << "disini kamu bisa menginputkan data alumni" << endl << endl;

                        cout << "Pilih Menu yang ingin di inputkan" << endl;
                        cout << endl;
                        cout << "================== INSERT DATA ==================" <<endl << endl;
                        cout << "1.Insert Data Alumni" << endl;
                        cout << "2.Insert Data Pendidikan" << endl;
                        cout << "3.Insert Pemilihan Jenjang Pendidikan" << endl << endl;
                        cout << "=================== EDIT DATA ===================" <<endl << endl;
                        cout << "4.Edit Data Alumni" << endl;
                        cout << "5.Edit Data Pendidikan" << endl << endl;

                        cout << "================== DELETE DATA ==================" <<endl << endl;

                        cout << "6.Hapus Data Alumni" << endl;
                        cout << "7.Hapus Data Pendidikan" << endl << endl;

                        cout << "================== SEARCH DATA ==================" <<endl << endl;

                        cout << "8.Cari Data" << endl << endl;

                        cout << "=================== VIEW DATA ===================" <<endl << endl;

                        cout << "9.Tampil Data" << endl;

                        cout << "0.keluar" << endl;
                        cout << "pilihan : ";
                        cin  >> pilihan;
                    }
                } else {
                    system("CLS");
                    cout << "Data tidak Ada di Database" << endl;
                    system("PAUSE");
                }

        } else {
            system("CLS");
            cout << "Selamat Datang di menu registrasi !!" << endl;
            cout << "masukan kode untuk memvertifikasi bahwa kamu admin !!" << endl << endl;

            cout << "masukan kode registrasi : " ;
            cin >> kode ;

            if (kode == "12345"){
                system("CLS");
                cout << "masukan admin baru !!" << endl << endl;

                cout << "Username : " ;

                cin >> username;
                datauser[0].username = username;

                cout << "password : " ;
                cin >> password;
                datauser[0].password = password;
                cout << endl;
                cout << "data sukses ter input !!" << endl << endl;
                system("PAUSE");
            } else {
                system("CLS");
                cout << "kode salah !!";
                cout << endl;
                system("PAUSE");
            }
        }
        system("CLS");
        cout << "Selamat datang Di program penginputan data alumni " << endl;
        cout << "Silahkan  Login terlebih dahulu !!" << endl;

        cout << "1.Login" << endl;
        cout << "2.Registrasi (hanya admin)" << endl;

        cout << endl << "pilih Menu : " ;
        cin >> pilihan ;
    }
}
