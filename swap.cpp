#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int* tempa = &a;
    int* tempb = &b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // Swapping values using pointers
    int temp = *tempa;
    *tempa = *tempb;
    *tempb = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}