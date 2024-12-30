#include <iostream>
#include "account_view.h"
#include "../model/account_model.h"
using namespace std;

void add_account() {
    string username;
    int password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    insert_account(username, password);
}

void find_account() {
    string username;
    cout << "Enter username: ";
    cin >> username;
    search_accountByUsername(username);
}

void list_account() {
    cout <<" daftar akun "<<endl;
    cout <<"----------------------------"<<endl;
    view_akun();
}

void edit_account() {
    string username, new_username;
    int new_password;
    cout << "Enter username: ";
    cin >> username;
    cout << " Enter new username: ";
    cin >> new_username;
    cout << " Enter password: ";
    cin >> new_password;
    bool cek = update_account(username, new_username, new_password);
    if (cek) {
        cout << "Account successfully updated" << endl;
    }else {
        cout << "Account not found" << endl;
    }
}

void remove_account() {
    string username;
    cout << "Enter username: ";
    cin >> username;
    bool cek = delete_account(username);
    if (cek) {
        cout << "Account successfully deleted" << endl;
    }else {
        cout << "Account not found" << endl;
    }
}

bool login_account() {
    string username;
    int password;
    cout << "Enter username: ";
    cin >> username;
    cout << " Enter password: ";
    cin >> password;
    return login(username, password);
}

void add_accounts_statis() {
    insert_account("kurniawan",1234);
    insert_account("aan",1111);
}