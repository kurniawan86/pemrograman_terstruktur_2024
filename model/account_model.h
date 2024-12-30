#ifndef ACCOUNT_MODEL_H
#define ACCOUNT_MODEL_H

#include <string>
using std::string;

// Deklarasi fungsi
void insert_account(string username, int kode);
void view_akun();
bool update_account(string username, string new_username, int new_pin);
bool delete_account(string username);
void search_accountByUsername(string username);
bool login(string username, int kode);

#endif // ACCOUNT_MODEL_H