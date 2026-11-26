#include <iostream>
using namespace std;

float majorNum(float a, float b, float c = 0) {
    float max = (a > b) ? a : b;
    return (max > c) ? max : c;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}

int main() {
    float num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The major number is: " << majorNum(num1, num2, num3) << endl;
    cout << "The result of the division (" << num1 << " / " << num2 << ") is: " << divide(num1, num2) << endl;
    return 0;
}