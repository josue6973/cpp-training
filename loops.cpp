#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int evenCount = 0;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; ++i) {
        if (i % 2 == 0) {
            cout << i << endl;
            evenCount++;
        } else {
            continue;
        }
    }
    cout << "Number of even integers: " << evenCount << endl;
    return 0;
}