#include <iostream>
using namespace std;

void menu() {
    int option;
    cout << "Menu." << endl;
    cout << "Select an option:" << endl;
    cin >> option;
    cout << "You selected option: " << option << endl;
}

void salute() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    menu();
    salute();
    return 0;
}