#include <iostream>
using namespace std;

float average(int arr[]) {
    float average = 0;
    float sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }
    average = (sum) / 10;
    return average;
}

int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    float avg = average(arr);
    cout << "Average: " << avg << endl;
    return 0;
}