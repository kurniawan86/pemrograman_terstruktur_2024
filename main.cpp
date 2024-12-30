#include <iostream>

#include "view/account_view.h"

using namespace std;

void main_menu() {
    cout <<"===== MENU UTAMA =====" << endl;
    cout <<"1. Manage Account " << endl;
    cout <<"2. Daftar Anggota Perpus "<< endl;
    cout <<"3. EXIT "<<endl;
}

void account_menu() {
    cout <<"===== ACCOUNT MENU =====" << endl;
    cout <<"1. Add Account " << endl;
    cout <<"2. Delete Account " << endl;
    cout <<"3. View Account " << endl;
    cout <<"4. View All Account " << endl;
    cout <<"5. Update Account " << endl;
    cout <<"6. Exit " << endl;
}

int main() {
    int pilihan_mainMenu;
    bool running_mainMenu = true;
    bool running = true;
    int login_counter = 0;
    add_accounts_statis();
    bool running_account = true;

    while (running) {
        while (login_counter < 3) {
            bool cek = login_account();
            if (cek) {
                cout << "Login successful" << endl;
                cout << endl;
                while (running_mainMenu) {
                    main_menu();
                    cout << "masukkan pilihan :";
                    cin >> pilihan_mainMenu;
                    switch (pilihan_mainMenu) {
                        case 1:
                            cout <<" masuk menu manage Account "<<endl;

                            int pilihan_account;
                            while (running_account) {
                                account_menu();
                                cout <<"masukkan pilihan :";
                                cin >> pilihan_account;
                                switch (pilihan_account) {
                                    case 1:
                                        cout <<"add account"<<endl;
                                        add_account();
                                    break;
                                    case 2:
                                        cout <<"delete account "<<endl;
                                        remove_account();
                                    break;
                                    case 3:
                                        cout <<"view account "<<endl;
                                        find_account();
                                    break;
                                    case 4:
                                        cout <<"view all account "<<endl;
                                        list_account();
                                    break;
                                    case 5:
                                        cout <<"update account "<<endl;
                                        edit_account();
                                    break;
                                    case 6:
                                        cout <<"exit"<<endl;
                                        running_account = false;
                                    break;
                                }
                            }
                            cout << endl;
                            break;
                        case 2:
                            cout <<" masuk menu kedua "<<endl;
                            break;
                        case 3:
                            running_mainMenu = false;
                            running = false;
                            break;
                    }
                }
            }else {
                cout << "Login failed" << endl;
                cout << "silahkan mencoba ulang "<< endl;
                cout << " -------------------------- " <<endl;
                login_counter++;
            }
        }
    }
}