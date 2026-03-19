#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    file.close();

    cout << "Registration successful!\n";
}

void loginUser() {
    string username, password;
    string u, p;
    bool found = false;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");

    while(file >> u >> p) {
        if(u == username && p == password) {
            found = true;
            break;
        }
    }

    file.close();

    if(found)
        cout << "Login Successful!\n";
    else
        cout << "Invalid Username or Password\n";
}

int main() {

    int choice;

    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        registerUser();
    else if(choice == 2)
        loginUser();
    else
        cout << "Invalid option\n";

    return 0;
}
