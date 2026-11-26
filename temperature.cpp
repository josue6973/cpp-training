#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    if (cin.fail()) {
        cout << "Invalid input. Please enter a numeric value." << endl;
        return 1; // Exit with an error code
    }
    if (celsius < 15) {
        cout << "It's cold." << endl;
    } else if (celsius >= 15 && celsius <= 25) {
        cout << "It's moderate." << endl;
    } else {
        cout << "It's hot." << endl;
    }
    return 0;
}