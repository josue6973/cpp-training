#include <iostream>
using namespace std;

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return x / y;
}

float power(float base, float exponent) {
    float result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main () {
    int choice;
    cout << "Calculator Program" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5) {
        float num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Result: " << power(num1, num2) << endl;
                break;
        }
    } else if (choice == 6) {
        cout << "Exiting the program." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}