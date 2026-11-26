#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    cout << "Welcome to the Calculator Menu!" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You selected Addition." << endl;
            cout << "Enter two numbers to add: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "You selected Subtraction." << endl;
            cout << "Enter two numbers to subtract: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "You selected Multiplication." << endl;
            cout << "Enter two numbers to multiply: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "You selected Division." << endl;
            cout << "Enter two numbers to divide: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
    }
    return 0;
}