#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int arrdiagonal[3][3] = {0};
    int transpose[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    cout << "Enter elements for the 3x3 array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            if (j == i) {
                arrdiagonal[i][j] = arr[i][j];
            }
        }
    }
    cout << "The diagonal array is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrdiagonal[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The original array is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "The transpose of the array is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}