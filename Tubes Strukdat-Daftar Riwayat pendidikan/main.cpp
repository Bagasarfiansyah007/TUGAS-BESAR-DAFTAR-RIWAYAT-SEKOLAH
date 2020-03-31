#include "h_parent.h"
#include <stdlib.h>
int main()
{
    listParent l;
    address1 p;
    int i,j,x,pilihan;
    user datauser[n];
    string username,password,kode;

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
                    system("CLS");
                    cout << "Hai selamat datang " << username << "!!!" << endl;
                    cout << "disini kamu bisa menginputkan data alumni" << endl << endl;

                    cout << "Pilih Menu yang ingin di inputkan" << endl;
                    cout << endl;
                    cout << "1.Insert Data Alumni" << endl;
                    cout << "2.Insert Data Pendidikan" << endl;
                    cout << "3.Hapus Data Alumni" << endl;
                    cout << "4.Hapus Data Pendidikan" << endl;
                    cout << "5.Cari Data" << endl;
                    cout << "6.Tampil Data" << endl;
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
                        } else if (pilihan == 3) {
                            system("CLS");
                            tampildataparent(l);
                            cout << endl;
                            deleteelmtparent(l,p);
                            system("PAUSE");
                        } else if (pilihan == 4) {
                            system("CLS");
                        } else if (pilihan == 5) {
                            system("CLS");
                        } else if (pilihan == 6) {

                        }

                        system("CLS");
                        cout << "Hai selamat datang " << username << "!!!" << endl;
                        cout << "disini kamu bisa menginputkan data alumni" << endl << endl;

                        cout << "Pilih Menu yang ingin di inputkan" << endl;
                        cout << endl;
                        cout << "1.Insert Data Alumni" << endl;
                        cout << "2.Insert Data Pendidikan" << endl;
                        cout << "3.Hapus Data Alumni" << endl;
                        cout << "4.Hapus Data Pendidikan" << endl;
                        cout << "5.Cari Data" << endl;
                        cout << "6.Tampil Data" << endl;
                        cout << "0.keluar" << endl;
                        cout << endl;
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
