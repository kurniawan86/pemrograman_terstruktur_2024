#include <iostream>
#include "../database/account_db.h"
#include "account_model.h"
using namespace std;

void search_accountByUsername(string username) {
    for (int i=0;i<size_akun;i++) {
        if (akun_uname[i] == username) {
            cout << "username : " << akun_uname[i] << endl;
            cout << "pin : " << akun_pin[i] << endl;
        }
    }
}

void insert_account(string username, int kode) {
    akun_uname[size_akun] = username;
    akun_pin[size_akun] = kode;
    size_akun++;
}

void view_akun() {
    for (int i = 0; i < size_akun; i++) {
        cout << "Username: " << akun_uname[i] << endl;
        cout << "PIN: " << akun_pin[i] << endl;
        cout << "\n";
    }
}

bool update_account(string username, string new_username, int new_pin) {
    for (int i = 0; i < size_akun; i++) {
        if (akun_uname[i] == username) {
            akun_uname[i] = new_username;
            akun_pin[i] = new_pin;
            return true;
        }
    }
    return false;
}

bool delete_account(string username) {
    for (int i = 0; i < size_akun; i++) {
        if (akun_uname[i] == username) {
            for (int j = i; j < size_akun - 1; j++) {
                akun_uname[j] = akun_uname[j + 1];
                akun_pin[j] = akun_pin[j + 1];
            }
            size_akun--;
            return true;
        }
    }
    cout << "Akun tidak ditemukan.\n";
}

bool login(string username, int kode) {
    for (int i = 0; i < size_akun; i++) {
        if (akun_uname[i] == username && akun_pin[i] == kode) {
            return true;
        }
    }
    return false;
}